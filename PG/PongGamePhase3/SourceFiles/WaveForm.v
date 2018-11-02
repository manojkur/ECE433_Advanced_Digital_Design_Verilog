`timescale 1ns / 1ps
// File name	: Waveform.v
// Written by	: Jianjian Song
// to generate a waveform of period
// March 9, 2012
module Waveform(HalfPeriod, Waveform, Reset, Clock) ;

parameter 	NumberOfBits = 20;
input		Reset, Clock;
input [NumberOfBits-1:0] HalfPeriod;
output reg	Waveform;

reg 	[NumberOfBits-1:0]	WaveformCounter;
	
	
always @ (posedge Clock) begin
	if(Reset==1)		begin WaveformCounter <= 0; Waveform<=0; end
	else if(HalfPeriod==0) Waveform<=0;
	else if(WaveformCounter>=HalfPeriod) 
		begin WaveformCounter<=0; Waveform <= ~Waveform; end
	else WaveformCounter<=WaveformCounter+1'b1;
	end
endmodule
