`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:    pong 
// Description:
//		generate VGA timing signals hsync and vsync
// 		and synchronized(x,y) coordinates.
// Names: Leela Pakanati and Manoj Kurapati
// Date: November 2018
////////////////////////////////////////////////////////////////////////////////////

module CRTcontroller2018fall(SystemClockFreq, CRTClockFreq, Yresolution, 
Xresolution,  hsync, vsync, xpos, ypos, Reset, Clock);

parameter ResolutionSize=10, SystemClockSize=10;
input [ResolutionSize-1:0] Xresolution, Yresolution;
input [SystemClockSize-1:0] SystemClockFreq, CRTClockFreq;
input Reset, Clock;
output hsync, vsync;
output [ResolutionSize-1:0] xpos, ypos;	//x and y position coordinates

//vsync is generated after active video and front porch from =>490 to >=491 
parameter vSynchPulse=10'd2, vFrontPorch=10'd10, vBackPorch=10'd29; //vsynch=520
//following are simulation parameters for vsynch
//parameter vSynchPulse=10'd1, vFrontPorch=10'd2, vBackPorch=10'd3; //vsynch=10 yresolution=4
//hsync is generated after active video and front porch from >664 to >=760 
parameter hSynchPulse=10'd95, hFrontPorch=10'd25, hBackPorch=10'd40; //hsynch=800
//following are simulation parameters for hsynch
//parameter hSynchPulse=10'd2, hFrontPorch=10'd1, hBackPorch=10'd1; //hsynch=12, xresolution=8

wire LineEnd;
wire PixelClock;

//module hsyncModule2018fall(SynchPulse, BackPorch, ActiveVideo, FrontPorch, 
//hsync, LineEnd, xposition, PixelClock, Reset, Clock);

hsyncModule2018fall hsyncUnit(
	.SynchPulse(hSynchPulse),
	.BackPorch(hBackPorch),
	.ActiveVideo(Xresolution),
	.FrontPorch(hFrontPorch),
	.hsync(hsync), 
	.LineEnd(LineEnd), 
	.xposition(xpos), 
	.PixelClock(PixelClock), 
	.Reset(Reset), 
	.Clock(Clock));

//module vsyncModule2018fallTemplate(LineEnd, vSynchPulse, vFrontPorch, Yresolution, 
//vBackPorch, vsync, ypos, Reset, Clock);
vsyncModule2018fallTemplate vsyncUnit(
	.LineEnd(LineEnd), 
	.SynchPulse(vSynchPulse), 
	.FrontPorch(vFrontPorch), 
	.ActiveVideo(Yresolution), 
	.BackPorch(vBackPorch), 
	.vsync(vsync), 
	.yposition(ypos),
	.hsync(hsync),
	.Reset(Reset), 
	.Clock(Clock));

//module CRTClock2018Template(SystemClockFreq, CRTClockFreq, PixelClock, Reset, Clock);
CRTClock2018Template CRTClockUnit(
	.SystemClockFreq(SystemClockFreq), 
	.CRTClockFreq(CRTClockFreq), 
	.PixelClock(PixelClock), 
	.Reset(Reset), 
	.Clock(Clock));
endmodule
