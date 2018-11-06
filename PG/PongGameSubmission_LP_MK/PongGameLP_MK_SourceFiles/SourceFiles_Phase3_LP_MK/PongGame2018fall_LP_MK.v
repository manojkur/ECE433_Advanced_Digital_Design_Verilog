`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:    pong 
// Description:
//		Pong Game Top Level
// Names: Leela Pakanati and Manoj Kurapati
// Date: November 2018
////////////////////////////////////////////////////////////////////////////////////

module PongGame2018fall_JJS_JJS(
   input Clock, Reset, rota1, rotb1, rota2, rotb2, PlaySound,
    output [3:0] red,
    output [3:0] green,
    output [3:0] blue,
    output hsync, vsync,
	output Speaker
    );

wire [9:0] xpos;
wire [9:0] ypos;

wire [3:0] red_game, green_game, blue_game;
wire [3:0] red_D1, green_D1, blue_D1;
wire [3:0] red_D2, green_D2, blue_D2;
wire [3:0] red_D12, green_D12, blue_D12;
wire [3:0] red_D22, green_D22, blue_D22;

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

wire hit1, point_reset1, hit2, point_reset2;
wire [8:0] paddlePosition1, paddlePosition2;

game_module2018fall gameUnit(
	.xpos(xpos), 
	.ypos(ypos), 
	.rota1(rota1), 
	.rotb1(rotb1),
	.rota2(rota2), 
	.rotb2(rotb2),	
	.red(red_game), 
	.green(green_game), 
	.blue(blue_game),
	.paddlePosition1(paddlePosition1),
	.paddlePosition2(paddlePosition2),
	.hit1(hit1),
	.point_reset1(point_reset1),
	.hit2(hit2),
	.point_reset2(point_reset2),
	.Reset(Reset), 
	.Clock(Clock));

wire hitShot1, pointresetShot1;
wire hitShot2, pointresetShot2;

//module ClockedPositiveOneShot(InputPulse, OneShot, Reset, CLOCK) ;
ClockedPositiveOneShot hitOneShot1(
	.InputPulse(hit1), 
	.OneShot(hitShot1), 
	.Reset(Reset), 
	.CLOCK(Clock));

ClockedPositiveOneShot pointresetOneShot1(
	.InputPulse(point_reset1), 
	.OneShot(pointresetShot1), 
	.Reset(Reset), 
	.CLOCK(Clock));

ClockedPositiveOneShot hitOneShot2(
	.InputPulse(hit2), 
	.OneShot(hitShot2), 
	.Reset(Reset), 
	.CLOCK(Clock));

ClockedPositiveOneShot pointresetOneShot2(
	.InputPulse(point_reset2), 
	.OneShot(pointresetShot2), 
	.Reset(Reset), 
	.CLOCK(Clock));

//wire Clock50MHz, Locked;
//ClockUnit50MHz clockUnit(Clock50MHz, Clock, Locked);

//module PlaySound(PlayAgain, Speaker, Reset, Clock100MHz);
PlaySound failSound(
	.PlayAgain(PlaySound), 
	.Speaker(Speaker), 
	.Reset(Reset), 
	.Clock100MHz(Clock));

reg [3:0] Number1 = 0;
reg [3:0] Number2 = 0;
reg [3:0] Number12 = 0;
reg [3:0] Number22 = 0;

always @(posedge hitShot1 or posedge pointresetShot1) begin
	if(pointresetShot1)
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

always @(posedge hitShot2 or posedge pointresetShot2) begin
	if(pointresetShot2)
		begin
			Number12 <= 0;
			Number22 <= 0;
		end
	else begin
		Number22 <= Number22 == 9 ? 0 : Number22 + 1;
		if(Number22 == 9) begin
			Number12 <= Number12 == 9 ? 0 : Number12 + 1;
		end
	end
end

wire SevenSegPixel1, SevenSegPixel2, SevenSegPixel12, SevenSegPixel22;

//digit color assignment
assign red_D1={1'b0,1'b0,SevenSegPixel1, 1'b0};
assign green_D1={SevenSegPixel1,1'b0,SevenSegPixel1, 1'b0};
assign blue_D1={1'b0,SevenSegPixel1, 1'b0, 1'b0};

assign red_D2={1'b0,1'b0,SevenSegPixel2, 1'b0};
assign green_D2={SevenSegPixel2,1'b0,SevenSegPixel2, 1'b0};
assign blue_D2={1'b0,SevenSegPixel2, 1'b0, 1'b0};

assign red_D12={1'b0,1'b0,SevenSegPixel12, 1'b0};
assign green_D12={SevenSegPixel12,1'b0,SevenSegPixel12, 1'b0};
assign blue_D12={1'b0,SevenSegPixel12, 1'b0, 1'b0};

assign red_D22={1'b0,1'b0,SevenSegPixel22, 1'b0};
assign green_D22={SevenSegPixel22,1'b0,SevenSegPixel22, 1'b0};
assign blue_D22={1'b0,SevenSegPixel22, 1'b0, 1'b0};
//combo color outputs
assign red=red_game | red_D1 | red_D2 | red_D12 | red_D22;
assign green=green_game | green_D1 | green_D2 | green_D12 | green_D22; 
assign blue=blue_game | blue_D1 | blue_D2 | blue_D12 | blue_D22;

//7-seg display location
wire [9:0] Digit1X, Digit1Y, Digit2X, Digit2Y;
wire [9:0] Digit1X2, Digit1Y2, Digit2X2, Digit2Y2;

assign Digit1X = paddlePosition1 + 20;
assign Digit1Y = 440;
assign Digit2X = paddlePosition1 + 45;
assign Digit2Y = 440;

assign Digit1X2 = paddlePosition2 + 20;
assign Digit1Y2 = 19;
assign Digit2X2 = paddlePosition2 + 45;
assign Digit2Y2 = 19;

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
	
VGA7SegDisplay DisplayUnit12(
	.digitXPosition(Digit1X2), 
	.digitYPosition(Digit1Y2), 
	.xpos(xpos), 
	.ypos(ypos), 
	.digit(Number12),
	.digitpixel(SevenSegPixel12));
	
VGA7SegDisplay DisplayUnit22(
	.digitXPosition(Digit2X2), 
	.digitYPosition(Digit2Y2), 
	.xpos(xpos), 
	.ypos(ypos), 
	.digit(Number22),
	.digitpixel(SevenSegPixel22));
endmodule
