`timescale 1ns / 1ps
// File name	: DelayTimer.v
// Written by	: Jianjian Song
// Divide a high frequency square wave to 
// generate a lower frequency square wave.
//StartDelay==1 to start delay
module DelayTimer(StartDelay,Timeout,Clock) ;
//parameter	Divider = 5000;	//delay time in number of clock cycles
//swimulation parameter
parameter	Divider = 40000000;
parameter 	NumberOfBits = 27;
input			StartDelay, Clock;
output reg	Timeout;
reg 	[NumberOfBits-1:0]	count;
	
always @ (count)
	if(count==Divider) Timeout<=1;
	else Timeout<=0;
	
always @ (posedge Clock)
	if(StartDelay==0)		begin count <= 0; end
	else if (count>=Divider)	count<=0;
		else count <= count+1'b1;
endmodule
