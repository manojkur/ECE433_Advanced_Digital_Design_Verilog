`timescale 1ns / 1ps
///File: PongGame2018fall_JJS_JJS.v
//pong game with new controller template
//ECE433-01 Fall 2018
//Term Project VGA driver template
//
//Date: October 2018
//the video controller uses synch timings from the pong game
//the system clock should be 100MHz
//the VGA pixel clock is 25MHz
//this is a template for students to complete
//try to match the video_timer
//based on pong from http://www.bigmessowires.com/2009/06/21/fpga-pong/. 

module PongGame2018fall_JJS_JJS(
   input Clock, Reset, rota, rotb,
    output [3:0] red,
    output [3:0] green,
    output [3:0] blue,
    output hsync, vsync
    );

wire [9:0] xpos;
wire [9:0] ypos;

wire [3:0] red_game, green_game, blue_game;
wire [3:0] red_D1, green_D1, blue_D1;
wire [3:0] red_D2, green_D2, blue_D2;

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

wire hit, point_reset;
wire [8:0] paddlePosition;

/* module game_module2018fall(
				input [9:0] xpos,
				input [9:0] ypos,
				input rota,
				input rotb,
				output [3:0] red,
				output [3:0] green,
				output [3:0] blue, 
				output reg [8:0] paddlePosition,
				output reg hit,
				output reg point_reset,
				input Reset,input clk25);
*/
game_module2018fall gameUnit(
	.xpos(xpos), 
	.ypos(ypos), 
	.rota(rota), 
	.rotb(rotb), 
	.red(red_game), 
	.green(green_game), 
	.blue(blue_game),
	.paddlePosition(paddlePosition),
	.hit(hit),
	.point_reset(point_reset),
	.Reset(Reset), 
	.Clock(Clock));

wire hitShot, pointresetShot;

//module ClockedPositiveOneShot(InputPulse, OneShot, Reset, CLOCK) ;
ClockedPositiveOneShot hitOneShot(
	.InputPulse(hit), 
	.OneShot(hitShot), 
	.Reset(Reset), 
	.CLOCK(Clock));

ClockedPositiveOneShot pointresetOneShot(
	.InputPulse(point_reset), 
	.OneShot(pointresetShot), 
	.Reset(Reset), 
	.CLOCK(Clock));

reg [3:0] Number1 = 0;
reg [3:0] Number2 = 0;

always @(posedge hitShot or posedge pointresetShot) begin
	if(pointresetShot)
		begin
			Number1 <= 0;
			Number2 <= 0;
		end
	else begin
		Number2 <= Number2 == 9 ? 0 : Number2 + 1;
		if(Number2 == 9) begin
			Number1 <= Number1 == 9 ? 0 : Number1 + 1;
		end
	end
end

wire SevenSegPixel1, SevenSegPixel2;

//digit color assignment
assign red_D1={1'b0,1'b0,SevenSegPixel1, 1'b0};
assign green_D1={SevenSegPixel1,1'b0,SevenSegPixel1, 1'b0};
assign blue_D1={1'b0,SevenSegPixel1, 1'b0, 1'b0};

assign red_D2={1'b0,1'b0,SevenSegPixel2, 1'b0};
assign green_D2={SevenSegPixel2,1'b0,SevenSegPixel2, 1'b0};
assign blue_D2={1'b0,SevenSegPixel2, 1'b0, 1'b0};

//combo color outputs
assign red=red_game | red_D1 | red_D2;
assign green=green_game | green_D1 | green_D2; 
assign blue=blue_game | blue_D1 | blue_D2;

//7-seg display location
wire [9:0] Digit1X, Digit1Y, Digit2X, Digit2Y;

assign Digit1X = paddlePosition + 20;
assign Digit1Y = 440;
assign Digit2X = paddlePosition + 45;
assign Digit2Y = 440;

/*
module VGA7SegDisplay(input [9:0] digitXPosition, digitYPosition, xpos, ypos,
						input [3:0] digit,
						output reg digitpixel
    );
*/
VGA7SegDisplay DisplayUnit1(
	.digitXPosition(Digit1X), 
	.digitYPosition(Digit1Y), 
	.xpos(xpos), 
	.ypos(ypos), 
	.digit(Number1),
	.digitpixel(SevenSegPixel1));
	
VGA7SegDisplay DisplayUnit2(
	.digitXPosition(Digit2X), 
	.digitYPosition(Digit2Y), 
	.xpos(xpos), 
	.ypos(ypos), 
	.digit(Number2),
	.digitpixel(SevenSegPixel2));
endmodule
