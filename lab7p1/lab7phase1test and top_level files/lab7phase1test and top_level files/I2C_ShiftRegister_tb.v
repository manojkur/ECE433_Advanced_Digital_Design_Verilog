`timescale 1ns / 1ps

module ShiftRegisterI2C_tb;

	reg WriteLoad;
	reg [7:0] SentData;
	reg ShiftIn, ShiftorHold, ShiftClock, Reset, CLOCK;

	wire [7:0] ReceivedData;
	wire ShiftOut;
//	wire ShiftClockOneShot=uut.ShiftClockOneShot;

	I2C_ShiftRegister uut (WriteLoad, SentData, ReceivedData,ShiftIn,ShiftOut,ShiftorHold,Reset,CLOCK);

	initial begin  WriteLoad = 0;  SentData = 0;  ShiftIn = 0;   ShiftorHold = 0;   ShiftClock = 0;  Reset = 0;  CLOCK = 0; end
	always #2 CLOCK=~CLOCK;
//	always #4 ShiftClock=~ShiftClock;
	
	initial fork
	#0 Reset = 0;  #6 Reset = 1;  #14 Reset = 0;  
	#0 WriteLoad = 0;  #11 WriteLoad = 1; #22 WriteLoad = 0; #66 WriteLoad = 1;  #76 WriteLoad = 0; 
	#0 SentData = 8'b10101011;    	#56 SentData = 8'b00110101;  
	#0 ShiftIn = 1;   #13 ShiftIn = 1;   #19 ShiftIn = 0;   #24 ShiftIn = 1;   #38 ShiftIn = 0;    #46 ShiftIn = 1;
	#67 ShiftIn = 0; #98 ShiftIn = 1;
	#0 ShiftorHold = 0;   #22 ShiftorHold = 1;    #36 ShiftorHold = 0;  
	#47 ShiftorHold = 1; #67 ShiftorHold = 0;  
	#80 $stop;
	join
endmodule
