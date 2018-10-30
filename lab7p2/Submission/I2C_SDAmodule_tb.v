`timescale 1ns / 1ps

module SDAmodule_tb;

	// Inputs
	reg ReadorWrite;
	reg Select;
	reg StartStopAck;
	reg ShiftOut;

	// Outputs
	wire ShiftIn;

	// Bidirs
	wire SDA;

	// Instantiate the Unit Under Test (UUT)
	I2C_SDAmodule uut (SDA, ReadorWrite, Select, StartStopAck, ShiftIn, ShiftOut);

	initial begin  ReadorWrite = 0;  Select = 0;  StartStopAck=1;  ShiftOut = 0;  end
	
	initial fork
	
	#0 ReadorWrite = 0; #12 ReadorWrite = 1; #34 ReadorWrite = 0; #56 ReadorWrite = 1; #78 ReadorWrite = 0; 
	#0 Select = 0;  #21 Select = 1; #35 Select = 0; #77 Select = 1; #96 Select = 0; 
	#0 StartStopAck = 1;  #38 StartStopAck =0; #43 StartStopAck = 1; #50 StartStopAck =0; #53 StartStopAck = 1;
	 #94 StartStopAck =0; #98 StartStopAck = 1;
	
	#0 ShiftOut = 0;  	#21 ShiftOut = 1; 	#34 ShiftOut = 0; 	#45 ShiftOut = 1;  	#57 ShiftOut = 0;  #87 ShiftOut = 1;
	#100 $stop;
	join
      
endmodule

