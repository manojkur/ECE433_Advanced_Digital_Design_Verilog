`timescale 1ns / 1ps

module MusicSheetWriterTB;

	reg Start, Enter, Clock, Reset;
	wire [4:0] CurrentAddress;
	MusicSheetWriter uut (Start, Enter, CurrentAddress, Clock, Reset);
	initial begin Start = 0; Enter = 0; Clock = 0; Reset = 0; end
	initial fork
	#0 Reset = 1;  #63 Reset = 0;
	#0 Start = 0; #31 Start = 1;  #201 Start = 0; 
	#0 Enter = 0; #51 Enter = 1; #62 Enter = 0; #83 Enter = 1; #99 Enter = 0;
	#121 Enter = 1; #134 Enter = 0; #167 Enter = 1; #179 Enter = 0;
	#211 Enter = 1; #223 Enter = 0;
	#300 $stop;
	join
	always #5 Clock = ~Clock;
	  
endmodule

