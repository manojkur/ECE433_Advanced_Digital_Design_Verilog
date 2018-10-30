`timescale 1ns / 1ps
//File: hsyncModule2018fall.v
//Author: Jianjian Song
//Date: October 23, 2018
//to generate hsync signal and x position coordinate for VGA video display
//Rose-Hulman Institute of Technology
//PixelClock provides the reference time for pixel duration
//Restart is not synchronized with PixelClock
//synch pulse is generated at the end of the line: Active Video-BackPorch-SynchPulse-FrontPorch
//this is how it is done by the video timer of the pong game
// x coordinate has to cover the whole line from 0 to 800 for the game module to work

module hsyncModule2018fall(SynchPulse, BackPorch, ActiveVideo, FrontPorch, 
hsync, LineEnd, xposition, PixelClock, Reset, Clock);

parameter xresolution=10;

input [xresolution-1:0] SynchPulse, FrontPorch, ActiveVideo, BackPorch;
input PixelClock, Reset, Clock;
output hsync, LineEnd;
output reg [xresolution-1:0] xposition;
wire [xresolution-1:0] xcount;

ClockedNegativeOneShot PixelClockUnit(PixelClock, PixelClockOneShot, Reset, Rlock);
assign LineEnd=xcount==EndCount;	//reset counter
wire [xresolution-1:0] EndCount=SynchPulse+FrontPorch+ActiveVideo+BackPorch;
//synch pulse appears at the end of the line and after front porch to mimic the pong video_timer
//hsync <= ~(xpos > 664 && xpos <= 760);  // active for 95 clocks
assign hsync = ~(xcount>=(ActiveVideo+FrontPorch)&&xcount<=(ActiveVideo+FrontPorch+SynchPulse));

always@(xcount, SynchPulse, BackPorch, ActiveVideo, FrontPorch) 
	xposition<=xcount;	//the game circuit does not work if xposition does not run from 0 to 800. JJS
//module UniversalCounter10bitsV5(P,BeginCount, EndCount, Q,S1,S0,TerminalCount, Reset, CLOCK);
UniversalCounter10bitsV5 XPositionCounter(10'd0,10'd0, EndCount, xcount, LineEnd,LineEnd||PixelClockOneShot,   , Reset, Clock) ;

endmodule
