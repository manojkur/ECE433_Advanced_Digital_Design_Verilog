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
	reg [3:0] DataCounter;

	reg TimeOut;

	always @(posedge clock, posedge reset) begin
		if(reset) begin
			State <= InitialState;
		end else begin
			State <= NextState;
		end
	end

	always @(State, Go, ClockI2C, DataCounter, TimeOut)begin
		case(State)
			InitialState: begin
				BaudEnable <= 0;
				ReadorWrite <= 0;
				WriteLoad <= 0;
				Select <= 0;				
				ShiftorHold <= 0;
				StartStopAck <= 0;
				Count <= 2;
				ClearTimer <= 1;
				if(Go)
					if(ClockI2C)
						NextState <= StartState;
					else
						NextState <= InitialState;
				else 
					NextState <= InitialState;
			end

			StartState:

			LoadState:

			WriteState:

			AcknowledgeState:

			TransitState:

			StopState:

			default:

		endcase // State
	end


endmodule