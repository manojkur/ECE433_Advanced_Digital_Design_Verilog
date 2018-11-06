`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:    pong 
// Description:
//		generate 25MHz clock from 100MHz
// Names: Leela Pakanati and Manoj Kurapati
// Date: November 2018
////////////////////////////////////////////////////////////////////////////////////
module CRTClock2018Template(SystemClockFreq, CRTClockFreq, PixelClock, 
Reset, Clock);

parameter SystemClockSize=10;
input [SystemClockSize-1:0] SystemClockFreq;
input [SystemClockSize-1:0] CRTClockFreq;
output reg	PixelClock;
input Reset, Clock;

reg [15:0] 	pixel_count;

//a counter is needed to generate PixelClock
 always @(posedge Clock)
	if(Reset==1) begin pixel_count <= 1'b0;
				PixelClock <= 1'b1;
					end
	//	else if (pixel_count == 8) 
	else
		if (pixel_count == SystemClockFreq/(CRTClockFreq*2)) begin
			pixel_count <= 1'b1;
			PixelClock <= !PixelClock;
		end else begin
					pixel_count <= pixel_count + 1'b1;
			end
endmodule

