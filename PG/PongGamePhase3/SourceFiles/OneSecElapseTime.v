`timescale 1ns / 1ps
//File Name: OneSecElapseTime.v
//Author: Jianjian Song
//Date:	May 2012
//generate one second elapse time at 40MHz clock
//start counting when Start ==1;
//Return Timeout==1 when one second elapse time is reached
 
module OneSecElapseTime(Start, Timeout, Reset, Clock) ;

parameter 	NumberOfBitsForSecond = 26;	//67,107864
//parameter OneSecondElapseTime = 3;	//simulation count
parameter OneSecondElapseTime = 20000000;	//40MHz clock
input		Start, Reset, Clock;
output	Timeout;
reg 	[NumberOfBitsForSecond-1:0]	SecondsCounter;
reg State;

always@(posedge Clock or posedge Reset)
	if (Reset==1) State<=0;
	else if(Start==1 && Timeout==0) State<=1;
	else if(Timeout==1) State<=0;
	else State<=State;

assign Timeout = (SecondsCounter==OneSecondElapseTime);
always @ (posedge Clock or posedge Reset)
	if(Reset==1)	begin SecondsCounter<=0; end
	else if((SecondsCounter<=OneSecondElapseTime) && (State==1)) begin
		SecondsCounter<=SecondsCounter+1'b1; end
	else begin SecondsCounter<=0;end
endmodule
