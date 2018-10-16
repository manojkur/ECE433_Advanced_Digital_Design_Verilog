`timescale 1ns / 1ps
//File Name: I2C_ShiftRegister.v
//Author: Manoj Kurapati and Leela Pakanati
//Date: October 16, 2018
//ECE433 Fall 2018
//Phase 1 of Lab #7 I2C driver and TMP101 temperature sensor
module I2C_ShiftRegister(WriteLoad, SentData, ReceivedData,ShiftIn,ShiftOut,ShiftorHold,Reset,CLOCK);

input CLOCK, Reset, ShiftIn, ShiftorHold, WriteLoad;
input [7:0] SentData;
output reg ShiftOut;
output reg [7:0] ReceivedData;

reg [7:0] newReceivedData;

always @(posedge CLOCK or posedge Reset)
	if(Reset)
		begin
			ShiftOut <= 0;
			ReceivedData <= 8'b00000000;
		end
	else
		begin
			ShiftOut <= newReceivedData[7];
			ReceivedData <= newReceivedData;
		end
	
always @(ShiftorHold or WriteLoad)
	if(WriteLoad)
		newReceivedData <= SentData;
	else
		begin
			if(ShiftorHold)
				newReceivedData <= {ReceivedData[6:0], ShiftIn};
			else
				newReceivedData <= ReceivedData;
		end

endmodule