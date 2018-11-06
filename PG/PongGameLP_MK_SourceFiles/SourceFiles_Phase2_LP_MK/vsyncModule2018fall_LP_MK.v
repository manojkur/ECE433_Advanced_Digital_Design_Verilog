`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:    pong 
// Description:
// 		The line increment is synchronized with the hsync pulse
// 		synch pulse is generated at the end of the line: Active Video-BackPorch-SynchPulse-FrontPorch
// 		this is how it is done by the video timer of the pong game
// 		LineEnd and FrameEnd are ANDed to restart frame
// Names: Leela Pakanati and Manoj Kurapati
// Date: November 2018
//////////////////////////////////////////////////////////////////////////////////

module vsyncModule2018fallTemplate(LineEnd, SynchPulse, FrontPorch, ActiveVideo, 
BackPorch, vsync, yposition, hsync, Reset, Clock);

parameter yresolution=10;
input [yresolution-1:0] SynchPulse, FrontPorch, ActiveVideo, BackPorch;
input Reset, Clock, hsync;
output LineEnd;
output vsync;
output reg [yresolution-1:0] yposition;
wire [yresolution-1:0] ycount;

//hsynch starts next line
ClockedNegativeOneShot RestartUnit(LineEnd, NextLineOneShot, Reset, Clock);
//a counter is needed to generate synch signal and y coordinate
//to be completed by students

ClockedNegativeOneShot LineClockUnit(hsync, LineClockOneShot, Reset, Clock);

assign LineEnd= ycount==EndCount;	//Reset counter

wire [yresolution-1:0] EndCount=SynchPulse+FrontPorch+ActiveVideo+BackPorch;
assign vsync = ~(ycount> (ActiveVideo+FrontPorch) && ycount<=(ActiveVideo+FrontPorch+SynchPulse));

always@(ycount, SynchPulse, BackPorch, ActiveVideo, FrontPorch) 
	yposition<=ycount;	//the game circuit does not work if xposition does not run from 0 to 800. JJS
//module UniversalCounter10bitsV5(P,BeginCount, EndCount, Q,S1,S0,TerminalCount, Reset, Clock);
UniversalCounter10bitsV5 YPositionCounter(10'd0,10'd0, EndCount, ycount, LineEnd,LineEnd||LineClockOneShot,   , Reset, Clock) ;
endmodule
