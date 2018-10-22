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

always @(posedge CLOCK or posedge Reset)
	if(Reset)
		begin
			ShiftOut <= 0;
			ReceivedData <= 8'b00000000;
		end
	else
		begin
			if(WriteLoad)
				begin
					ShiftOut <= SentData[7];
					ReceivedData <= SentData;
				end
			else
				begin
					if(ShiftorHold)
						begin
							ShiftOut <= ReceivedData[6];
							ReceivedData <= {ReceivedData[6:0], ShiftIn};
						end
					else
						begin
							ShiftOut <= ReceivedData[7];
							ReceivedData <= ReceivedData;
						end
				end
		end

endmodule