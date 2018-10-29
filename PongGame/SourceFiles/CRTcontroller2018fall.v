`timescale 1ns / 1ps
//File Name: CRTcontroller2018fall.v
//Author: Jianjian Song
//ECE433-01 Fall 2018
//Date: October 2018
//Test: On Nexys 3 board successfully
//Purpose: generate VGA timing signals hsync and vsync
// and synchronized(x,y) coordinates.
//inputs: resolution (x,y) and system clock in MHz
//active videos are Xresolution and Yresolution
//y ranges from 400 to 600 pixels; x ranges from 600 to 800 pixels. 
//synch pulse, back porch and front porch are defined within this module
// hsync <= ~(xposos > 664 && xposos <= 760);  // active for 95 clocks
// vsync <= ~(yposos == 490 || yposos == 491);   // active for lines 490 and 491

module CRTcontroller2018fall(SystemClockFreq, CRTClockFreq, Yresolution, 
Xresolution,  hsync, vsync, xpos, ypos, reset, clock);
parameter ResolutionSize=10, SystemClockSize=10;
input [ResolutionSize-1:0] Xresolution, Yresolution;
input [SystemClockSize-1:0] SystemClockFreq, CRTClockFreq;
input reset, clock;
output hsync, vsync;
output [ResolutionSize-1:0] xpos, ypos;	//x and y position coordinates

//vsync is generated after active video and front porch from =>490 to >=491 
//parameter vSynchPulse=10'd2, vFrontPorch=10'd10, vBackPorch=10'd29; //vsynch=520
//following are simulation parameters for vsynch
parameter vSynchPulse=10'd1, vFrontPorch=10'd2, vBackPorch=10'd3; //vsynch=10 yresolution=4
//hsync is generated after active video and front porch from >664 to >=760 
//parameter hSynchPulse=10'd95, hFrontPorch=10'd25, hBackPorch=10'd40; //hsynch=800
//following are simulation parameters for hsynch
parameter hSynchPulse=10'd2, hFrontPorch=10'd1, hBackPorch=10'd1; //hsynch=12, xresolution=8

wire LineEnd;
wire PixelClock;

//module hsyncModule2018fall(SynchPulse, BackPorch, ActiveVideo, FrontPorch, 
//hsync, LineEnd, xposition, PixelClock, reset, clock);

hsyncModule2018fall hsyncUnit(hSynchPulse, hBackPorch,  Xresolution, hFrontPorch, 
hsync, LineEnd, xpos, PixelClock, reset, clock);

//module vsyncModule2018fallTemplate(LineEnd, vSynchPulse, vFrontPorch, Yresolution, 
//vBackPorch, vsync, ypos, reset, clock);
vsyncModule2018fallTemplate vsyncUnit(LineEnd, vSynchPulse, vFrontPorch, Yresolution, 
vBackPorch, vsync, ypos, reset, clock);

//module CRTClock2018Template(SystemClockFreq, CRTClockFreq, PixelClock, Reset, Clock);
CRTClock2018Template CRTclockUnit(SystemClockFreq, CRTClockFreq, PixelClock, reset, clock);
endmodule
