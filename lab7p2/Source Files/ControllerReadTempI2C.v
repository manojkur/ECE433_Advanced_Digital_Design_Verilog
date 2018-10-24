//File Name: ControllerReadTempI2C.v
//Author: Manoj Kurapati and Leela Pakanati
//Date: October 16, 2018
//ECE433 Fall 2018
//Phase 1 of Lab #7 I2C driver and TMP101 temperature sensor

module ControllerReadTempI2C(
	input clock,
	input ClockI2C,
	input Reset,
	inout SDA,
	input Start,
	output reg BaudEnable,
	output reg Done,
	output reg ReadOrWrite,
	output reg Select,
	output reg ShiftorHold,
	output reg StartStopAck,
	output reg WriteLoad);

	wire OneShotNegative;
	wire OneShotPositive;


	ClockedNegativeOneShot OneShotNegativeUnit(ClockI2C, OneShotNegative, Reset, clock);
	ClockedPositiveOneShot OneShotPositiveUnit(ClockI2C, OneShotPositive, Reset, clock); 

	reg ACKbit;

	reg [2:0] State;
	parameter InitialState=4'd0, StartState=4'd1, LoadState=4'd2, WriteState=4'd3, AcknowledgeWriteState=4'd4;
	parameter CheckState=4'd5, ReadState=4'd6, AcknowledgeReadState=4'd7, TransitState=4'd8, StopState = 4'd9; 

	reg ClearTimer;

	reg [2:0] NextState = 1'b0;
	reg [3:0] Count = 4'd10;

	reg TimeOut;
	reg [10:0] delayTime = 1'b0;

	//switch state
	always @(posedge clock, posedge Reset) begin
		if(Reset) 
			State <= InitialState;
		else begin
			State <= NextState;
			if(OneShotPositive == 1)
				ACKbit <= SDA;
			else 
				ACKbit <= ACKbit;
		end
	end

	//delay timer
	always @(posedge clock) begin
		if(ClearTimer | (delayTime>=11'd2000))
			delayTime<=1'b0;
		else
			delayTime<=delayTime+1'b1;

		if(delayTime == 11'd2000) begin
			TimeOut <= 1'b1;
		end else
			TimeOut<= 1'b0;
	end

	//counter
	always @(posedge clock)begin
		case(State)
			LoadState: if(OneShotNegative)	Count 	<=	Count-1'b1;	else Count 	<=	Count;
			WriteState: if(OneShotNegative)	Count 	<=	Count-1'b1;	else Count 	<=	Count;
			ReadState: if(OneShotPositive)	Count 	<=	Count-1'b1;	else Count 	<=	Count;
			default:Count<=4'd10;
		endcase
	end


	//next state
	always @(State, Go, TimeOut, Count, ClockI2C, OneShotPositive)begin
		case(State)
			InitialState:begin
				if(Go)
					if(ClockI2C)
						NextState <= StartState;
					else
						NextState <= InitialState;
				else 
					NextState <= InitialState;
			end
			
			StartState:begin
				if(TimeOut)
					NextState <= LoadState;
				else
					NextState <= StartState;
			end

			LoadState: begin
				if(Count == 4'd10)
					NextState <= LoadState;
				else
					NextState <= WriteState;
			end


			WriteState: begin
				if(Count == 1'b1)
					NextState <= AcknowledgeWriteState;
				else
					NextState <= WriteState;
				
			end

			AcknowledgeWriteState: begin
				if(OneShotPositive)
					NextState <= CheckState;
				else 
					NextState <= AcknowledgeWriteState;
			end

			CheckState:
				if(SDA == 0)
					NextState <= StartState;
				else
					NextState <= ReadState;

			ReadState:
				if(Count == 2)
					NextState <= AcknowledgeReadState;
				else
					NextState <= ReadState;

			AcknowledgeReadState:
				if(OneShotPositive)
					NextState<=TransitState;
				else
					NextState <= AcknowledgeReadState;

			TransitState: begin
				if(TimeOut)
					NextState <= StopState;
				else
					NextState <= TransitState;
			end

			StopState: begin
				if(TimeOut)
					NextState <= InitialState;
				else
					NextState <= StopState;
			end

			default: begin
				NextState <= InitialState;
			end 

		endcase // State
	end


	//outputs
	always @(State, OneShotNegative)begin
		case(State)
			InitialState: begin
				BaudEnable 		<=	1'b0;
				ReadOrWrite 	<=	1'b0;
				WriteLoad 		<=	1'b0;
				Select			<=	1'b0;
				StartStopAck 	<=	1'b1;
				ClearTimer		<=	1'b1;
				ShiftorHold 	<= 	1'b0;
				Done			<=	1'b0;
			end

			StartState: begin
				BaudEnable		<=	1'b0;
				ReadOrWrite		<=	1'b0;
				WriteLoad		<=	1'b0;
				Select			<=	1'b0;
				StartStopAck	<=	1'b0;
				ClearTimer		<= 	1'b0;
				ShiftorHold 	<= 	1'b0;
				Done			<=	1'b0;
			end

			LoadState: begin
				BaudEnable		<=	1'b1;
				ReadOrWrite		<=	1'b0;
				WriteLoad		<=	1'b1;
				Select			<=	1'b0;
				StartStopAck	<=	1'b0;
				ClearTimer		<=	1'b1;
				ShiftorHold 	<= 	1'b0;
				Done			<=	1'b0;
			end 

			WriteState:	begin
				BaudEnable		<=	1'b1;
				ReadOrWrite		<=	1'b0;
				WriteLoad		<=	1'b0;
				Select			<=	1'b1;
				StartStopAck	<=	1'b0;
				ClearTimer		<=	1'b1;
				ShiftorHold 	<= 	OneShotNegative;
				Done			<=	1'b0;
			end

			AcknowledgeState: begin
				BaudEnable		<=	1'b1;
				ReadOrWrite		<=	1'b1;
				WriteLoad		<=	1'b0;
				Select			<=	1'b0;
				StartStopAck	<=	1'b0;
				ClearTimer		<=	1'b1;
				ShiftorHold 	<= 	1'b0;
				Done			<=	1'b0;
			end 

			TransitState: begin
				BaudEnable		<=	1'b0;
				ReadOrWrite		<=	1'b0;
				WriteLoad		<=	1'b0;
				Select			<=	1'b0;
				StartStopAck	<=	1'b0;
				ClearTimer		<=	1'b0;
				ShiftorHold 	<= 	1'b0;
				Done			<=	1'b0;
			end 

			StopState:begin 
				BaudEnable		<=	1'b0;
				ReadOrWrite		<=	1'b0;
				WriteLoad		<=	1'b0;
				Select			<=	1'b0;
				StartStopAck	<=	1'b1;
				ClearTimer		<=	1'b0;
				ShiftorHold 	<= 	1'b0;
				Done			<=	1'b1;
			end 

			default: begin
				BaudEnable		<=	1'b0;
				ReadOrWrite		<=	1'b0;
				WriteLoad		<=	1'b0;
				Select			<=	1'b0;
				StartStopAck	<=	1'b0;
				ClearTimer		<=	1'b0;
				ShiftorHold 	<= 	1'b0;
				Done			<=	1'b0;
			end 

		endcase // State
	end
endmodule