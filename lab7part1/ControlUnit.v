module ControlUnit (
	input clock,
	input ClockI2C,
	input Go,
	input Reset,
	output BaudEnable,
	output ReadorWrite,
	output Select,
	output ShiftorHold,
	output StartStopAck,
	output WriteLoad	
);

	reg [2:0] State;
	parameter InitialState=3'd0, StartState=3'd1, LoadState=3'd2, WriteState=3'd3, AcknowledgeState=3'd4;
	parameter TransitState=3'd5, StopState=3'd6; 


	reg ClearTimer;
	reg [2:0] NextState;
	reg [3:0] Count;

	reg TimeOut;
	reg Done;

	//switch state
	always @(posedge clock, posedge reset) begin
		if(reset) begin
			State <= InitialState;
		end else begin
			State <= NextState;
			// if(OneShotPositive==1)
			// 	ACKbit <= SDA; 
			// else 
			// 	ACKbit <= ACKbit;
		end
	end




	//next state
	always @(State, Go, ClockI2C, Count, TimeOut)begin
		case(State)
			InitialState:
				if(Go)
					if(ClockI2C)
						NextState <= StartState;
					else
						NextState <= InitialState;
				else 
					NextState <= InitialState;
			
			StartState:
				if(TimeOut)
					NextState <= LoadState;
				else
					NextState <= StartState;

			LoadState:
				if(Count == 9)
					NextState <= WriteState;
				else
					NextState <= LoadState;

			WriteState:
				if(Count == 1)
					NextState <= AcknowledgeState;
				else
					NextState <= WriteState;

			AcknowledgeState:
				if(ClockI2C == 1)
					NextState <= TransitState;
				else
					NextState <= AcknowledgeState;

			TransitState:
				if(TimeOut == 1)
					NextState <= StopState;
				else
					NextState <= TransitState;

			StopState:
				if(TimeOut == 1)
					NextState <= InitialState;
				else
					NextState <= StopState;

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
				Count 			<= 10;
				ClearTimer 		<= 1;
			end

			StartState: begin
				BaudEnable		<=	0;
				ReadorWrite		<=	0;
				WriteLoad		<=	0;
				Select			<=	0;
				ShiftorHold		<=	0;
				StartStopAck	<=	0;
				Count			<=	10;
				ClearTimer		<=	0;
			end

			LoadState: begin
				BaudEnable		<=1;
				ReadorWrite		<=0;
				WriteLoad		<=1;
				Select			<=0;
				ShiftorHold		<=0;
				StartStopAck	<=1;
				Count 			<= Count-1;
				ClearTimer		<=1;
			end 

			WriteState:	begin
				BaudEnable		<=1;
				ReadorWrite		<=0;
				WriteLoad		<=0;
				Select			<=1;
				ShiftorHold		<=     ;
				StartStopAck	<=0;
				Count 			<= Count-1;
				ClearTimer		<=1;
			end

			AcknowledgeState: begin
				BaudEnable		<=1;
				ReadorWrite		<=1;
				WriteLoad		<=0;
				Select			<=0;
				ShiftorHold		<=0;
				StartStopAck	<=0;
				Count 			<=10;
				ClearTimer		<=1;
			end 

			TransitState: begin
				BaudEnable		<=0;
				ReadorWrite		<=0;
				WriteLoad		<=0;
				Select			<=0;
				ShiftorHold		<=0;
				StartStopAck	<=0;
				Count 			<=10;
				ClearTimer		<=0;
			end 

			StopState:begin 
				BaudEnable		<=0;
				ReadorWrite		<=0;
				WriteLoad		<=0;
				Select			<=0;
				ShiftorHold		<=0;
				StartStopAck	<=1;
				Count 			<=10;
				ClearTimer		<=0;
			end 

			default: begin
				BaudEnable		<=0;
				ReadorWrite		<=0;
				WriteLoad		<=0;
				Select			<=0;
				ShiftorHold		<=0;
				StartStopAck	<=0;
				Count 			<=0;
				ClearTimer		<=0;
			end 

		endcase // State
	end


endmodule