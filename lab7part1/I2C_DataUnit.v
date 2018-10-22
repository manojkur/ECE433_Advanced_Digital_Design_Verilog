`timescale 1ns / 1ps
//File Name: I2C_DataUnit.v
//Author: Manoj Kurapati and Leela Pakanati
//Date: October 16, 2018
//ECE433 Fall 2018
//Phase 1 of Lab #7 I2C driver and TMP101 temperature sensor
module I2C_DataUnit (
	input WriteLoad, 
	input ReadorWrite, 
	input ShiftorHold, 
	input Select, 
	input [Length-1:0] SentData,
	output [length-1:0] ReceivedData,
	inout SDA,
	input StartStopAck,
	input Reset,
	input clock); 

parameter LENGTH = 8; 
//module I2C_ShiftRegister(WriteLoad, SentData, ReceivedData,ShiftIn,ShiftOut,ShiftorHold,Reset,CLOCK);
wire ShiftDataIn, ShiftDataOut; 
I2C_ShiftRegister ShiftUnit(
	.(WriteLoad), 
	.(SentData), 
	.(ReceivedData),
	.(ShiftDataIn), 
	.(ShiftDataOut),
	.(ShiftorHold),
	.Reset(Reset),
	.clock(clock));

//module I2C_SDAmodule(SDA, ReadorWrite, Select, StartStopAck, ShiftIn, ShiftOut);
I2C_SDAmodule SDAUnit(
	.(SDA), 
	.(ReadorWrite), 
	.(Select), 
	.(StartStopAck), 
	.(ShiftDataIn), 
	.(ShiftDataOut));
endmodule 
