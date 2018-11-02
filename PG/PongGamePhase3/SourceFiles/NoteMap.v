`timescale 1ns / 1ps
//Map a note number to an array of keys
module NoteMap(NoteNumber, Enable, NoteArray);
input Enable; // Logic 1 to enable this module
input [3:0] NoteNumber; 
output reg [2:0] NoteArray;	//three notes
parameter NoteC=3'b001, NoteD=3'b010, NoteE=3'b100;

always@(NoteNumber or Enable)
	if (Enable==1) 
		case(NoteNumber)
			1: NoteArray<=NoteC;
			2: NoteArray<=NoteD;
			3: NoteArray<=NoteE;
			default: NoteArray<=3'b000;
		endcase
	else NoteArray<=3'b000;
	

endmodule
