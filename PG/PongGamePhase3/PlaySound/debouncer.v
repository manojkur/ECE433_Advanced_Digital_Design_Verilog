// File name	: Debouncer.v
// Written by	: Jianjian Song
// debouncing an input switch
//if (Switch==1) delay a bit and test again. if (switch==1) output is 1
//else output is 0
//visa verse
`timescale 1ns / 1ps

module Debouncer(InputPulse, DebouncedOuput, Reset, CLOCK) ;

input		InputPulse, Reset, CLOCK;
output reg DebouncedOuput;
parameter State0=0, State1=1, State2=2, State3=3;
reg [1:0] State, NextState;

wire Timeout;
reg ClearTimer;

always @ (posedge CLOCK)
	if(Reset==1)	State <= 0;
	else	State<=NextState;
	
always@(State)
	case (State)
	0: begin DebouncedOuput<=0; ClearTimer<=1; end	//timer cleared
	1: begin DebouncedOuput<=0; ClearTimer<=0; end	//timer starts running
	2: begin DebouncedOuput<=0; ClearTimer<=1; end
	3: begin DebouncedOuput<=1; ClearTimer<=1; end
	endcase

always@(State or InputPulse or Timeout)
	case (State)
	0:	if (InputPulse==0) NextState<=State0; else NextState<=State1;
	1:	if (Timeout==0) NextState<=State1; else NextState<=State2;
	2: if (InputPulse==0) NextState<=State0; else NextState<=State3;
	3:	if (InputPulse==0) NextState<=State0; else NextState<=State3;
	endcase

//DelayLoop(MR,Timeout,Clock) ;

DelayLoop Timer(ClearTimer,Timeout,CLOCK);

endmodule
