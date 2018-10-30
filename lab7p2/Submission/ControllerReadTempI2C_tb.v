`timescale 1ns / 1ps
//set Divider =2 for simulation in module ControllerReadTempI2C
//parameter	Divider = 2;
module ControllerReadTempI2C_tb;
	reg Go, SDA, Reset, ClockI2C, clock;

	wire WriteLoad, ReadorWrite, ShiftorHold, Select, BaudEnable, StartStopAck,DONE;
	wire [3:0] State=uut.State;
	wire [3:0] DataCounter=uut.Count;
	wire TimeOut=uut.TimeOut, ACKbit=uut.ACKbit;
	wire OneShotPositive=uut.OneShotPositive, OneShotNegative=uut.OneShotNegative;

ControllerReadTempI2C uut (
	.clock(clock),
	.ClockI2C(ClockI2C),
	.Reset(Reset),
	.SDA(SDA),
	.Go(Go),
	.BaudEnable(BaudEnable),
	.Done(DONE),
	.ReadOrWrite(ReadorWrite),
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
	#0 SDA=0;  #13 SDA=1; #25 SDA=0; #56 SDA=1; #134 SDA=0; #189 SDA=1; #330 SDA=0;
	#850 $stop;
	join
      
endmodule
