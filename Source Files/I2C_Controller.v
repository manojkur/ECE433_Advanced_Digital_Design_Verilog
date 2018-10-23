module I2C_Controller (
	input clock,
	input ClockI2C,
	input Go,
	input Reset,
	output reg BaudEnable,
	output reg ReadorWrite,
	output reg Select,
	output reg ShiftorHold,
	output reg StartStopAck,
	output reg WriteLoad	
);

	wire OneShotNegative;
	wire OneShotPositive;


	ClockedNegativeOneShot OneShotNegativeUnit(ClockI2C, OneShotNegative, Reset, clock);
	ClockedPositiveOneShot OneShotPositiveUnit(ClockI2C, OneShotPositive, Reset, clock); 

	reg ACKbit;

	reg [2:0] State;
	parameter InitialState=3'd0, StartState=3'd1, LoadState=3'd2, WriteState=3'd3, AcknowledgeState=3'd4;
	parameter TransitState=3'd5, StopState=3'd6; 


	reg ClearTimer;
	reg [2:0] NextState;
	reg [3:0] Count = 10;

	wire TimeOut;
	assign TimeOut = OneShotNegative;

	//switch state
	always @(posedge clock, posedge Reset) begin
		if(Reset) begin
			State <= InitialState;
		end else begin
			State <= NextState;

			// if(OneShotPositive==1)
			// 	ACKbit <= SDA; 
			// else 
			// 	ACKbit <= ACKbit;
		end
	end


	//next state and count
	always @( State, Go, TimeOut, OneShotNegative, OneShotPositive)begin
		case(State)
			InitialState:begin
				if(Go)
					if(ClockI2C)
						NextState <= StartState;
					else
						NextState <= InitialState;
				else 
					NextState <= InitialState;
				Count <= 10;
			end
			
			StartState:begin
				if(TimeOut)
					NextState <= LoadState;
				else
					NextState <= StartState;
				Count <= 10;
			end

			LoadState: begin
				if(Count == 9)
					NextState <= WriteState;
				else
					NextState <= LoadState;

				if(OneShotNegative)
					Count <= Count - 1'b1;
				else 
					Count <= Count;
			end


			WriteState: begin
				if(Count == 1)
					NextState <= AcknowledgeState;
				else
					NextState <= WriteState;

				if(OneShotNegative)
					Count <= Count - 1'b1;
				else 
					Count <= Count;
			end

			AcknowledgeState: begin
				// if(Count == 2)
				// 	NextState <= TransitState;
				// else
				// 	NextState <= AcknowledgeState;

				Count <= 10;

				if(OneShotPositive)
					NextState <= TransitState;
					// Count <= Count - 1'b1;
				else 
					NextState <= AcknowledgeState;
					// Count <= Count;
			end

			TransitState: begin
				if(TimeOut == 1)
					NextState <= StopState;
				else
					NextState <= TransitState;
				Count <= 10;
			end

			StopState: begin
				if(TimeOut == 1)
					NextState <= InitialState;
				else
					NextState <= StopState;
				Count <= 10;
			end

			default:
				NextState <= InitialState;

		endcase // State
	end


	//outputs
	always @(State)begin
		case(State)
			InitialState: begin
				BaudEnable 		<= 0;
				ReadorWrite 	<= 0;
				WriteLoad 		<= 0;
				Select			<= 0;				
				ShiftorHold 	<= 0;
				StartStopAck 	<= 0;
				ClearTimer 		<= 1;
			end

			StartState: begin
				BaudEnable		<=	0;
				ReadorWrite		<=	0;
				WriteLoad		<=	0;
				Select			<=	0;
				ShiftorHold		<=	0;
				StartStopAck	<=	0;
				ClearTimer		<=	0;
			end

			LoadState: begin
				BaudEnable		<=1;
				ReadorWrite		<=0;
				WriteLoad		<=1;
				Select			<=0;
				ShiftorHold		<=0;
				StartStopAck	<=1;
				ClearTimer		<=1;
			end 

			WriteState:	begin
				BaudEnable		<=1;
				ReadorWrite		<=0;
				WriteLoad		<=0;
				Select			<=1;
				ShiftorHold		<=OneShotNegative;
				StartStopAck	<=0;
				ClearTimer		<=1;
			end

			AcknowledgeState: begin
				BaudEnable		<=1;
				ReadorWrite		<=1;
				WriteLoad		<=0;
				Select			<=0;
				ShiftorHold		<=0;
				StartStopAck	<=0;
				ClearTimer		<=1;
			end 

			TransitState: begin
				BaudEnable		<=0;
				ReadorWrite		<=0;
				WriteLoad		<=0;
				Select			<=0;
				ShiftorHold		<=0;
				StartStopAck	<=0;
				ClearTimer		<=0;
			end 

			StopState:begin 
				BaudEnable		<=0;
				ReadorWrite		<=0;
				WriteLoad		<=0;
				Select			<=0;
				ShiftorHold		<=0;
				StartStopAck	<=1;
				ClearTimer		<=0;
			end 

			default: begin
				BaudEnable		<=0;
				ReadorWrite		<=0;
				WriteLoad		<=0;
				Select			<=0;
				ShiftorHold		<=0;
				StartStopAck	<=0;
				ClearTimer		<=0;
			end 

		endcase // State
	end


endmodule