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



	always @(posedge clock, posedge reset) begin
		if(reset) begin
			
		end else begin
			
		end
	end


endmodule