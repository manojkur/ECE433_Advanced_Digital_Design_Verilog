//File Name: I2C_Controller.v
//Author: Manoj Kurapati and Leela Pakanati
//Date: October 16, 2018
//ECE433 Fall 2018
//Phase 1 of Lab #7 I2C driver and TMP101 temperature sensor

module I2C_Controller(
	input clock,
	input ClockI2C,
	input Go,
	input Reset,
	output reg BaudEnable,
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
	parameter InitialState=3'd0, StartState=3'd1, LoadState=3'd2, WriteState=3'd3, AcknowledgeState=3'd4;
	parameter TransitState=3'd5, StopState=3'd6; 

	reg ClearTimer;

	reg [2:0] NextState = 0;
	reg [3:0] Count = 10;

	reg TimeOut;
	reg [15:0] delayTime = 0;

	//switch state
	always @(posedge clock, posedge Reset) begin
		if(Reset) 
			State <= InitialState;
		else begin
			State <= NextState;
		end
	end

	initial begin
		ShiftorHold <= 0;
		ReadOrWrite <= 0;		
	end 

	always @(posedge clock) begin
		if(ClearTimer | (delayTime>=4))
			delayTime<=0;
		else
			delayTime<=delayTime+1;

		if(delayTime == 4) begin
			TimeOut <= 1'b1;
		end else
			TimeOut<= 1'b0;
	end


	//next state and count
	always @(State, Go, TimeOut, OneShotNegative, OneShotPositive)begin
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

				if(OneShotNegative) begin
					ShiftorHold <= 1;
					Count <= Count - 1'b1;
				end else begin
					ShiftorHold <= 0;
					Count <= Count;
				end 
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
				BaudEnable 		<=	0;
				ReadOrWrite 	<=	0;
				WriteLoad 		<=	0;
				Select			<=	0;
				StartStopAck 	<=	1;
				ClearTimer		<=	1;
			end

			StartState: begin
				BaudEnable		<=	0;
				ReadOrWrite		<=	0;
				WriteLoad		<=	0;
				Select			<=	0;
				StartStopAck	<=	0;
				ClearTimer		<= 	0;
			end

			LoadState: begin
				BaudEnable		<=	1;
				ReadOrWrite		<=	0;
				WriteLoad		<=	1;
				Select			<=	0;
				StartStopAck	<=	0;
				ClearTimer		<=	1;
			end 

			WriteState:	begin
				BaudEnable		<=	1;
				ReadOrWrite		<=	0;
				WriteLoad		<=	0;
				Select			<=	1;
				StartStopAck	<=	0;
				ClearTimer		<=	1;
			end

			AcknowledgeState: begin
				BaudEnable		<=	1;
				ReadOrWrite		<=	1;
				WriteLoad		<=	0;
				Select			<=	0;
				StartStopAck	<=	0;
				ClearTimer		<=	1;
			end 

			TransitState: begin
				BaudEnable		<=	0;
				ReadOrWrite		<=	0;
				WriteLoad		<=	0;
				Select			<=	0;
				StartStopAck	<=	0;
				ClearTimer		<=	0;
			end 

			StopState:begin 
				BaudEnable		<=	0;
				ReadOrWrite		<=	0;
				WriteLoad		<=	0;
				Select			<=	0;
				StartStopAck	<=	1;
				ClearTimer		<=	0;
			end 

			default: begin
				BaudEnable		<=	0;
				ReadOrWrite		<=	0;
				WriteLoad		<=	0;
				Select			<=	0;
				StartStopAck	<=	0;
				ClearTimer		<=	0;
			end 

		endcase // State
	end


endmodule