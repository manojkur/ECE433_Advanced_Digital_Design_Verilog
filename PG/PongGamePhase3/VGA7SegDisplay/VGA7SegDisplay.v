`timescale 1ns / 1ps
//File Name: VGA7SegDisplay.v
//Author: Chris Miller
//Date: April, 2015
//Purpose: Generate seven-segment display with pixels on VGA display
//input:  
// (digitXPosition, digitYPosition): upper left corner of the display
// (xpos, ypos): screen position where pixel digitpixel is located
// digit: decimal number to be displayed
// output
// digitpixel: 1-bit ON or OFF flag for pixel at (xpos, ypos)

module VGA7SegDisplay(input [9:0] digitXPosition, digitYPosition, xpos, ypos,
						input [3:0] digit,
						output reg digitpixel
    );
//
parameter SegmentWidth = 10'd20, SegmentHeight = 10'd28, lineWidth = 10'd4;

wire segmentA = (xpos >= digitXPosition+lineWidth && xpos <= digitXPosition+SegmentWidth-4 && ypos >= digitYPosition && ypos <= digitYPosition+lineWidth-1);
wire segmentB = (xpos >= digitXPosition+SegmentWidth-lineWidth && xpos <= digitXPosition+SegmentWidth-1 && ypos >= digitYPosition && ypos <= digitYPosition+SegmentHeight/2-2);
wire segmentC = (xpos >= digitXPosition+SegmentWidth-lineWidth && xpos <= digitXPosition+SegmentWidth-1 && ypos >= digitYPosition+SegmentHeight/2+2 && ypos <= digitYPosition+SegmentHeight-1);
wire segmentD = (xpos >= digitXPosition+lineWidth && xpos <= digitXPosition+SegmentWidth-4 && ypos >= digitYPosition+SegmentHeight-lineWidth && ypos <= digitYPosition+SegmentHeight-1);
wire segmentE = (xpos >= digitXPosition && xpos <= digitXPosition+lineWidth-1 && ypos >= digitYPosition+SegmentHeight/2+2 && ypos <= digitYPosition+SegmentHeight-1);
wire segmentF = (xpos >= digitXPosition && xpos <= digitXPosition+lineWidth-1 && ypos >= digitYPosition && ypos <= digitYPosition+SegmentHeight/2-2);
wire segmentG = (xpos >= digitXPosition+lineWidth && xpos <= digitXPosition+SegmentWidth-1 && ypos >= digitYPosition+(SegmentHeight-lineWidth)/2 && ypos <= digitYPosition+(SegmentHeight+lineWidth)/2);

always @(digit,segmentA,segmentA,segmentB,segmentC,segmentD,segmentE,segmentF,segmentG)
	case (digit) 
		0:	digitpixel <= (segmentA | segmentB | segmentC | segmentD | segmentE | segmentF );
		1:	digitpixel <= (segmentB | segmentC );
		2:	digitpixel <= (segmentA | segmentB | segmentD | segmentE | segmentG );
		3:	digitpixel <= (segmentA | segmentB | segmentC | segmentD | segmentG );
		4:	digitpixel <= (segmentB | segmentC | segmentF | segmentG );
		5:	digitpixel <= (segmentA | segmentC | segmentD | segmentF | segmentG );
		6:	digitpixel <= (segmentA | segmentC | segmentD | segmentE | segmentF | segmentG );
		7:	digitpixel <= (segmentA | segmentB | segmentC );
		8:	digitpixel <= (segmentA | segmentB | segmentC | segmentD | segmentE | segmentF | segmentG );
		9:	digitpixel <= (segmentA | segmentB | segmentC | segmentD | segmentF | segmentG );
		10:	digitpixel <= (segmentA | segmentB | segmentC | segmentE | segmentF | segmentG );
		default: digitpixel <= 0;
	endcase
endmodule
