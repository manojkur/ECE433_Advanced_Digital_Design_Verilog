`timescale 1ns / 1ps
//ECE433 Fall 2018
//disable system clock module to simulate the top level circuit
//assign clk50MHz to clock
//Change the delay loop to 3 counts in DelayUnit of Control Unit 
module lab7phase1overall;
	reg Go, Reset, clock;
	wire SCL, ClockLocked;
	// Bidirs
	wire SDA;
	wire [2:0] State=uut.ControlUnit.State;
	wire OneShotI2Cnegative=uut.ControlUnit.OneShotI2Cnegative;
	wire OneShotI2Cpositive=uut.ControlUnit.OneShotI2Cpositive;	
	wire [3:0] count=uut.ControlUnit.DataCounter;
//module Lab7I2Cphase1fall2018JJS_JJS(Go, SCL, SDA, Reset, clock, ClockLocked);
	// Instantiate the Unit Under Test (UUT)
	Lab7I2Cphase1fall2018JJS_JJS uut (Go, SCL, SDA, Reset, clock, ClockLocked);

	initial begin Go = 0;  Reset = 0;  clock = 0; end
	always #2 clock=~clock;
	initial fork
	#0 Reset=1;  #12 Reset=0;
	#0 Go=0;  #21 Go=1;     #61 Go=0;   #470 Go=1;  #479 Go=0;
	#600 $stop;
	join
      
endmodule

