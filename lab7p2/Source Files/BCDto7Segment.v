`timescale 1ns / 100ps
//Jianjian Song
//Date: 4 April 2011
//BCD to 7 segment display
//Common-Cathode decoding
module BCDto7Segment (BCDnumber,SEGMENTS);
//SevenSegments are ordered from G,F,E,D,C,B,A
//Segment A = SevenSegments[0].
//Active lower Enable
input	[3:0] BCDnumber; 
output reg[7:0] SEGMENTS;

	always @ (BCDnumber)
			case (BCDnumber)
				0:	SEGMENTS <= 8'B11000000;
				1:	SEGMENTS <= 8'B11111001;
				2:	SEGMENTS <= 8'B10100100;
				3:	SEGMENTS <= 8'B10110000;
				4:	SEGMENTS <= 8'B10011001;
				5:	SEGMENTS <= 8'B10010010;
				6:	SEGMENTS <= 8'B10000010;
				7:	SEGMENTS <= 8'B11111000;
				8:	SEGMENTS <= 8'B10000000;
				9:	SEGMENTS <= 8'B10010000;
			default:	SEGMENTS <= 8'B00000000;
			endcase
			
endmodule
