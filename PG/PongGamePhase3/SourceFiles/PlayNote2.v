`timescale 1ns / 1ps
//
//Play a note for amount of time
//Start is a one clock cycle pulse
//Over is a level signal. over=1 when the note has been played

module PlayNote2(Note, Duration, Start, Over, NoteArray, Reset, Clock);
input [3:0] Note; 
input [3:0] Duration;
input Start, Reset, Clock;
output Over;	//the has been played
output [2:0] NoteArray;	//three notes
reg [3:0] ElapseSeconds;
wire Timeout, StartAndStop;
reg State;

always@(posedge Clock or posedge Reset)
	if (Reset==1) State<=0;
	else if(Start==1 && Over==0) State<=1;
	else if(Over==1) State<=0;
	else State<=State;
	

always@(posedge Clock or posedge Reset)
	if(Reset==1) ElapseSeconds<=0;
	else if(Timeout==1 && State==1) ElapseSeconds<=ElapseSeconds+1'b1;
	else if (Over==0) ElapseSeconds<=ElapseSeconds;
	else ElapseSeconds<=0;

//module OneSecElapseTime(Start, Timeout, Reset, Clock) ;

OneSecElapseTime Timer(StartAndStop, Timeout, Reset, Clock);

assign StartAndStop=(ElapseSeconds<=Duration);
assign Over = (ElapseSeconds==Duration);

//module NoteMap(NoteNumber, Enable, NoteArray);
NoteMap NoteMapUnit(Note, State, NoteArray);

endmodule

