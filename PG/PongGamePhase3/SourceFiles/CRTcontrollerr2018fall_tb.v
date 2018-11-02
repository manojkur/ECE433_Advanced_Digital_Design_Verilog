`timescale 1ns / 1ps

module CRTcontroller2018fall_tb;

	reg [9:0] Xresolution, Yresolution;
	reg [9:0] SystemClock, CRTClock;
	reg reset, clock;

	wire hsync, vsync;
	wire [9:0] xposition, yposition;
	wire PixelClock=uut.PixelClock;

//module CRTcontroller2018fall(SystemClockFreq, CRTClockFreq, Yresolution, 
//Xresolution,  hsync, vsync, xpos, ypos, reset, clock);
	CRTcontroller2018fall uut (
	SystemClock, CRTClock, Yresolution, Xresolution, hsync, 
	vsync, xposition, yposition, reset, clock);

	initial begin
		// Initialize Inputs
		Xresolution = 8;
		Yresolution = 4;
		SystemClock = 6;
		CRTClock=2;
		reset = 0;
		clock=0;
	end
	always #1 clock=~clock;
	initial fork
	#0 reset=1; 	#5 reset=0; 
   #1200 $stop;
	join
      
endmodule
