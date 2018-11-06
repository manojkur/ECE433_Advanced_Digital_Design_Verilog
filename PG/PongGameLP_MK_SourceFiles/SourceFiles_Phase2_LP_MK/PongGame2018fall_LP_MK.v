`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:    pong 
// Description:
//		Top Level Pong Game
// Names: Leela Pakanati and Manoj Kurapati
// Date: November 2018
////////////////////////////////////////////////////////////////////////////////////


module PongGame2018fall_JJS_JJS(
   input Clock, Reset, rota, rotb,
    output [3:0] red,
    output [3:0] green,
    output [3:0] blue,
    output hsync, vsync
    );

wire [9:0] xpos;
wire [9:0] ypos;

parameter [9:0] NumberofPixels=10'd640, NumberofLines=10'd480;
parameter [9:0] SystemClock=10'd100, CRTClock=10'd25; //MHz 

//module CRTcontroller2018fall(SystemClockFreq, CRTClockFreq, Yresolution, 
//Xresolution,  hsync, vsync, xpos, ypos, reset, clock);
CRTcontroller2018fall VGAdisplay(
	.SystemClockFreq(SystemClock), 
	.CRTClockFreq(CRTClock), 
	.Yresolution(NumberofLines),
	.Xresolution(NumberofPixels),
	.hsync(hsync), 
	.vsync(vsync), 
	.xpos(xpos), 
	.ypos(ypos), 
	.Reset(Reset), 
	.Clock(Clock));
	  
/* module game_module2018fall(
				input [9:0] xpos,
				input [9:0] ypos,
				input rota,
				input rotb,
				output [3:0] red,
				output [3:0] green,
				output [3:0] blue, input Reset,input clk25);
*/
game_module2018fall gameUnit(
	.xpos(xpos), 
	.ypos(ypos), 
	.rota(rota), 
	.rotb(rotb), 
	.red(red), 
	.green(green), 
	.blue(blue),
	.Reset(Reset), 
	.Clock(Clock));
					
endmodule
