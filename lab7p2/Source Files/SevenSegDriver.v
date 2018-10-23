// File name	: SevenSegDriver.v
// Written by	: Jianjian Song
// ECE433 Fall 2018
// 4-bit universal bidirectional counter
`timescale 1ns / 1ps

module SevenSegDriver(D3, D2, D1, D0, Display, Reset, Clock, Select) ;
input [7:0] D3, D2, D1, D0;
input Reset, Clock;
output [7:0]	Display;

output [3:0] Select;

//module DisplayMux(D3, D2, D1, D0, Select, Display, Reset, Clock) ;
  DisplayMux DisplayInput(D3, D2, D1, D0, Select, Display, Reset, Clock) ;

//module Refreshing7Seg(Transistors,Reset, CLOCK) ;
  Refreshing7Seg Update(Select,Reset, Clock) ;
 
endmodule
