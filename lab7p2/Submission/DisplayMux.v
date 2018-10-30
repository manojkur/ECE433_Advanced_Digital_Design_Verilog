// File name	: DisplayMux.v
// Written by	: Jianjian Song
// ECE433 Fall 2018
// 4-bit universal bidirectional counter
`timescale 1ns / 1ps

module DisplayMux(D3, D2, D1, D0, Select, Display, Reset, Clock) ;
input [7:0] D3, D2, D1, D0;
input [3:0] Select;
input Reset, Clock;
output reg [7:0]	Display;

reg [7:0] Digit3, Digit2, Digit1, Digit0;	//stored values

always@(posedge Clock or posedge Reset) 
	if(Reset==1) begin Digit3<=0; Digit2<=0; Digit1<=0; Digit0<=0; end
	else 	begin Digit3<=D3; Digit2<=D2; Digit1<=D1; Digit0<=D0; end
	
always@(Select or Digit0 or Digit1 or Digit2 or Digit3)
	case (Select)
	4'b1110: Display <=Digit0;
	4'b1101: Display <=Digit1;
	4'b1011: Display <=Digit2;
	4'b0111: Display <=Digit3;
	default: Display <=Digit0;
	endcase
endmodule
