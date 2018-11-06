`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:    pong 
// Description:
//		generate one second elapse time at 40MHz clock
// Names: Leela Pakanati and Manoj Kurapati
// Date: November 2018
////////////////////////////////////////////////////////////////////////////////////
 
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
