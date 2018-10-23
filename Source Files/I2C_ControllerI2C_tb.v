`timescale 1ns / 1ps
//ECE433 Fall 2018
//Lab 7 Phase 1 Controller Simulation
module I2C_Controller_tb;

	reg Go,Reset,ClockI2C,clock;

	wire WriteLoad, ReadorWrite, ShiftorHold, Select, BaudEnable, StartStopAck;
	wire [2:0] State=uut.State;
	wire [3:0] DataCounter = uut.Count;
	wire TimeOut = uut.TimeOut;
	// wire OneShotI2Cnegative = uut.OneShotI2Cnegative;
	// wire OneShotI2Cpostive = uut.OneShotI2Cpositive;

	I2C_Controller uut (
		.clock(clock),
		.ClockI2C(ClockI2C),
		.Go(Go),
		.Reset(Reset),
		.BaudEnable(BaudEnable),
		.ReadorWrite(ReadorWrite),
		.Select(Select),
		.ShiftorHold(ShiftorHold),
		.StartStopAck(StartStopAck),
		.WriteLoad(WriteLoad));

	
	initial begin  Go = 0;  Reset = 0;  ClockI2C = 0;  clock = 0; end
	always #4 clock=~clock;
	always #12 ClockI2C=~ClockI2C;
	initial fork
	#0 Go = 0;  #12 Go = 1;  
	#0 Reset = 1;  #6 Reset = 0; 
	#450 $stop;
	join
      
endmodule

