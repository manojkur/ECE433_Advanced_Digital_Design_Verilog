`timescale 1ns / 1ps
// File name	: SpeakerTest.v
// Written by	: Jianjian Song
// a three notes keyboard

module ThreeMusicNotes(keyC, keyD, keyE, Speaker, Reset, Clock) ;

parameter 	NumberOfBits = 20;
input		keyC, keyD, keyE, Reset, Clock;
output Speaker;
wire [NumberOfBits-1:0] NoteC, NoteD, NoteE;
wire NoteCoutput,NoteDoutput,NoteEoutput;

assign Speaker = NoteCoutput || NoteDoutput || NoteEoutput;
	
//module InputModule(keyC,keyD,keyE,NoteC,NoteD,NoteE,Reset, Clock);
InputModule UnitInput(keyC,keyD,keyE,NoteC,NoteD,NoteE,Reset, Clock);

//module Waveform(HalfPeriod, Waveform, Reset, Clock) ;
	Waveform NoteCWave(NoteC, NoteCoutput, Reset, Clock);
	Waveform NoteDWave(NoteD, NoteDoutput, Reset, Clock);
	Waveform NoteEWave(NoteE, NoteEoutput, Reset, Clock);

endmodule
