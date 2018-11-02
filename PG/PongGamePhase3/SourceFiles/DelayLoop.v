`timescale 1ns / 1ps
// File name	: DelayLoop.v
// Written by	: Jianjian Song
// Divide a high frequency square wave to 
// generate a lower frequency square wave.

module DelayLoop(MR,Timeout,Clock) ;
parameter	Divider = 100000;	//delay time in number of clock cycles, 20ns
parameter 	NumberOfBits = 27;
input			MR, Clock;
output reg	Timeout;
reg 	[NumberOfBits-1:0]	count;
	
always @ (count)
	if(count==Divider) Timeout<=1;
	else Timeout<=0;
	
always @ (posedge Clock)
	if(MR==1)		begin count <= 0; end
	else if (count>=Divider)	count<=0;
		else count <= count+1'b1;
endmodule
