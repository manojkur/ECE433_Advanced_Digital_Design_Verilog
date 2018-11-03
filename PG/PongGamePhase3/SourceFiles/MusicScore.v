`timescale 1ns / 1ps
//Music score in RAM
module MusicScore(ReadOrWrite, Address, KeyInput, KeyOutput, TimeInput, TimeOutput,Clock, Reset);
input ReadOrWrite, Clock, Reset;
parameter DataLength=4;
input [DataLength-1:0] KeyInput, TimeInput;
output reg [DataLength-1:0] KeyOutput, TimeOutput;
parameter AddressBits=5;
input [AddressBits-1:0] Address;
parameter MemorySize=20;

reg [DataLength-1:0] Keys [0:MemorySize-1];
reg [DataLength-1:0] Times [0:MemorySize-1];

always@(posedge Clock or posedge Reset)
	if(Reset==1) begin
	Keys[0]<=1; Times[0]<=2;
	Keys[1]<=2; Times[1]<=1;
	Keys[2]<=3; Times[2]<=1;
	Keys[3]<=3; Times[3]<=1;
	Keys[4]<=2; Times[4]<=1;
	Keys[5]<=1; Times[5]<=1;
	Keys[6]<=1; Times[6]<=1;
	Keys[7]<=2; Times[7]<=1;
	Keys[8]<=3; Times[8]<=1;
	Keys[9]<=2; Times[9]<=1;
	Keys[10]<=1; Times[10]<=2;
	Keys[11]<=0; Times[11]<=0;
	end 
	else if (ReadOrWrite==1) begin	//read memory
		KeyOutput<=Keys[Address]; TimeOutput<=Times[Address];
	end
	else begin
		Keys[Address]<=KeyInput; Times[Address]<=TimeInput;
	end
endmodule
