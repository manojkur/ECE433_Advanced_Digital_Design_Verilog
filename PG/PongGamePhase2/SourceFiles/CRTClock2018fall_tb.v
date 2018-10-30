`timescale 1ns / 1ps

module CRTClock2018fall_tb;

	reg [30:0] SystemClock, CRTclock;
	reg Reset, Clock;

	wire PixelClock;
//module CRTClock2018Template(SystemClockFreq, CRTClockFreq, 
// PixelClock, Reset, Clock);
	CRTClock2018Template uut (SystemClock, CRTclock, PixelClock, Reset, Clock);

	initial begin SystemClock = 100; CRTclock=20; Reset = 0; Clock = 0; end
 
	initial fork
	#0 Reset=1; #20 Reset=0;
	#800 $stop;
	join
	always #4 Clock=~Clock;   
endmodule

