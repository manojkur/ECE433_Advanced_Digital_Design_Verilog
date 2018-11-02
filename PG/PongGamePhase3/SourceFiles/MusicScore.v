`timescale 1ns / 1ps
//Music score in RAM

module MusicScore(ReadOrWrite, Address, KeyInput, KeyOutput, TimeInput, TimeOutput,Clock, Reset);
input ReadOrWrite, Clock, Reset;
parameter DataLength=4;
input [DataLength-1:0] KeyInput, TimeInput;
output reg [DataLength-1:0] KeyOutput, TimeOutput;
parameter AddressBits=5;
input [AddressBits-1:0] Address;
parameter MemorySize=3;

reg [DataLength-1:0] Keys [0:MemorySize-1];
reg [DataLength-1:0] Times [0:MemorySize-1];

always@(posedge Clock or posedge Reset)
	if(Reset==1) begin
	Keys[0]<=0; Times[0]<=1;
	Keys[1]<=1; Times[1]<=1;
	Keys[2]<=0; Times[1]<=1;
	end 
	else if (ReadOrWrite==1) begin	//read memory
		KeyOutput<=Keys[Address]; TimeOutput<=Times[Address];
	end
	else begin
		Keys[Address]<=KeyInput; Times[Address]<=TimeInput;
	end
endmodule
