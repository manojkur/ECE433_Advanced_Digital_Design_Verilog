`timescale 1ns / 1ps
//file name: Pulse1second.v
//Manoj Kurapati
//ECE433 Fall 2018
//Date: Sept 25, 2018
// Purpose:  To generate one single positive pulse
//  every 1 sec from a 100MHz clock
module Pulse1second(Reset,Pulse1s,Clock);
parameter  PulsePeriod = 10000000; //10nsx1000,000=10ms
parameter NumberOfBits = 27;
input Reset, Clock;
output reg  Pulse1s;
reg [NumberOfBits-1:0]  count;

always @ (posedge Clock or posedge Reset)
	if(Reset==1)  
		begin 
			count <= 0; 
			Pulse1s<=0; 
		end
	else if (count==PulsePeriod)
		begin 
			count<=0; 
			Pulse1s<=1; 
		end
	else 
		begin 
			count <= count+1'b1; 
			Pulse1s <= 0; 
		end

endmodule
