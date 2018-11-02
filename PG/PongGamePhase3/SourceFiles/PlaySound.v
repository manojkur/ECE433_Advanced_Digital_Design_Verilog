`timescale 1ns / 1ps
//File: PlaySound.v
//Author: Jianjian Song
//Date:	November 2012
//Play a music score stored in the RAM in MusicSheet.v
//PlayAgain - play the score stored in MusicSheet when a positive pulse appears on PlayAgain

module PlaySound(PlayAgain, Speaker, Reset, Clock100MHz);
input PlayAgain, Reset, Clock100MHz;
output Speaker;

wire Clock; //= Clock100MHz; //, Locked;
parameter [9:0] SystemClock=10'd100, CRTClock=10'd50; //MHz 
//module CRTClock2018Template(SystemClockFreq, CRTClockFreq, PixelClock, Reset, Clock);
CRTClock2018Template CRTClockUnit(
	.SystemClockFreq(SystemClockFreq), 
	.CRTClockFreq(CRTClockFreq), 
	.PixelClock(Clock), 
	.Reset(Reset), 
	.Clock(Clock100MHz));

//ClockUnit50MHz clockUnit(Clock100MHz, Clock, Locked);
parameter AddressBits=5;
parameter DataLength=4;
wire [2:0] NoteArray;	//three notes
wire [DataLength-1:0] KeyOutput, TimeOutput;
wire [AddressBits-1:0] ReadingAddress;
wire EndofScore, OneShotPlayAgain;

ClockedOneShot PlayOneShot(PlayAgain, OneShotPlayAgain, Reset, Clock);

//module MusicSheetReader(Start, EndofScore, StartAddress, KeyOutput, TimeOutput, CurrentAddress, EndofNote, Clock, Reset);
MusicSheetReader Reader(OneShotPlayAgain, EndofScore, 5'd0 , KeyOutput, ReadingAddress, Over, Clock, Reset);

//module MusicScore(ReadOrWrite, Address, KeyInput, KeyOutput, TimeInput, TimeOutput,Clock, Reset);
MusicScore Sheet(1'b1,ReadingAddress, 4'd0, KeyOutput, 4'd0, TimeOutput,Clock, Reset);

//module PlayNote(Note, Duration, Start, Over, NoteArray, Reset, Clock);
PlayNote2 PlayNoteUnit(KeyOutput, TimeOutput, ~EndofScore, Over, NoteArray, Reset, Clock);

//module ThreeMusicNotes(keyC, keyD, keyE, Speaker, Reset, Clock) ;
ThreeMusicNotes NoteUnit(NoteArray[0], NoteArray[1], NoteArray[2], Speaker, Reset, Clock) ;

endmodule
