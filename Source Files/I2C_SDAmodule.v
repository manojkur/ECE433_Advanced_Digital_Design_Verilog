`timescale 1ns / 1ps
//File Name: I2C_SDAmodule.v
//Author: Manoj Kurapati and Leela Pakanati
//Date: October 16, 2018
//ECE433 Fall 2018
//Phase 1 of Lab #7 I2C driver and TMP101 temperature sensor
module I2C_SDAmodule (
	inout SDA,
	input ReadOrWrite,
	input Select,
	input StartStopAck,
	output ShiftDataIn,
	input ShiftDataOut);

assign ShiftDataIn = SDA;

assign SDA = (ReadOrWrite)? 1'bZ:((Select)? ShiftDataOut : StartStopAck);
//
//
//always @(ReadOrWrite or Select or StartStopAck or ShiftDataOut)
//	if(ReadOrWrite)
//		begin
//			if(Select)
//				begin
//					SDA <= ShiftDataOut;
//				end
//			else
//				begin
//					SDA <= StartStopAck;
//				end
//		end

endmodule