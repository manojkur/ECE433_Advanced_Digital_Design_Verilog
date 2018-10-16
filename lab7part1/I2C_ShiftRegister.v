`timescale 1ns / 1ps
//File Name: I2C_ShiftRegister.v
//Author: Manoj Kurapati and Leela Pakanati
//Date: October 16, 2018
//ECE433 Fall 2018
//Phase 1 of Lab #7 I2C driver and TMP101 temperature sensor
module I2C_ShiftRegister(WriteLoad, SentData, ReceivedData,ShiftIn,ShiftOut,ShiftorHold,Reset,CLOCK);

input CLOCK, Reset, ShiftIn, ShiftorHold, WriteLoad;
input [7:0] SentData;
output ShiftOut;
output [7:0] RecievedData;

endmodule
