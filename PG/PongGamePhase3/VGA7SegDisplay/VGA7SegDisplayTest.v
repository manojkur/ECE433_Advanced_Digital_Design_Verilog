`timescale 1ns / 1ps
//File Name: VGA7SegDisplayTest.v
//Author: Jianjian Song
//Date: May 14, 2015
//To test VGA7SegDisplay module
module VGA7SegDisplayTest(
    input clk100,
	 input reset,
	 input rota,
    input rotb,
	 input [3:0] Number1,
	 output ClockLocked,
    output [2:0] red,
    output [2:0] green,
    output [1:0] blue,
    output hsync,
    output vsync);

Clock25MHzGenerator ClockUnit(clk100,clk25,ClockLocked);

wire [9:0] xpos;
wire [9:0] ypos;
wire [2:0] red_game, green_game;
wire [1:0] blue_game;
wire [2:0] red_D1, green_D1;
wire [1:0] blue_D1;

video_timer video_timer_inst(reset, clk25, hsync, vsync, xpos, ypos);
game game_inst(reset, clk25, xpos, ypos, rota, rotb, red_game, green_game, blue_game);

wire SevenSegPixel1;
//digit color assignment
assign red_D1={1'b0,1'b0,SevenSegPixel1};
assign green_D1={SevenSegPixel1,1'b0,SevenSegPixel1};
assign blue_D1={1'b0,SevenSegPixel1};
//combo color outputs
assign red=red_game | red_D1;
assign green=green_game | green_D1; 
assign blue=blue_game | blue_D1;
//7-seg display location
wire [9:0] Digit1X, Digit1Y;

LocationUpdate LocationUnit(10'd200,10'd20,Digit1X,Digit1Y, reset, clk25);

VGA7SegDisplay DisplayUnit1(Digit1X, Digit1Y, xpos, ypos, Number1,SevenSegPixel1);
	 
endmodule
