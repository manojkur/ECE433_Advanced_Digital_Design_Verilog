//File Name: ClockedPositiveOneShot.v
//Author: Manoj Kurapati and Leela Pakanati
//Date: October 16, 2018
//ECE433 Fall 2018
//Phase 1 of Lab #7 I2C driver and TMP101 temperature sensor
`timescale 1ns / 1ps

module ClockedPositiveOneShot(InputPulse, OneShot, Reset, CLOCK) ;

input		InputPulse, Reset, CLOCK;
output reg OneShot;
parameter State0=0, State1=1, State2=2, State3=3;
reg [1:0] State;

always@(State)
	if(State==State1) OneShot<=1;
	else OneShot<=0;

always @ (posedge CLOCK)
	if(Reset==1)	State <= 0; else
	case (State)
	0:	if (InputPulse==0) State<=State0; else State<=State1;
	1:	if (InputPulse==0) State<=State0; else State<=State3;
	2:	State<=State0;
	3:	if (InputPulse==0) State<=State0; else State<=State3;
	endcase
endmodule
