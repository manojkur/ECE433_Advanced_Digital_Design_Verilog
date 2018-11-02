`timescale 1ns / 1ps
//Input module for the three music note circuit
//Created by Jianajian Song
//April 30, 2012

module InputModule(keyC,keyD,keyE,NoteC,NoteD,NoteE,Reset, Clock);

parameter 	NumberOfBits = 20;
output reg [NumberOfBits-1:0] NoteC, NoteD, NoteE;
input keyC,keyD,keyE, Reset, Clock;

parameter MiddleC = 95556;	//261.626Hz=>2x95556x20ns=191112x20n=3.82ms
parameter MiddleD = 85133;	//293.66Hz
parameter MiddleE = 75843;	//329.63Hz
parameter OutRange = 20'b00000000000000000000;

always@(posedge Clock or posedge Reset)
	if(Reset==1) begin NoteC<=OutRange; NoteD<=OutRange; NoteE<=OutRange; end 
	else  begin
	if(keyC==1) NoteC <=MiddleC; else NoteC<=OutRange;
	if (keyD==1) NoteD <=MiddleD; else NoteD<=OutRange;
	if (keyE==1) NoteE <=MiddleE; else NoteE<=OutRange;
	end
	
endmodule
