//File Name: lab7I2Cphase1fall2018JJS_JJS.v
//Author: Jianjian Song
//Date: October 5, 2018
//ECE433 Fall 2018
//Phase 1 of Lab #7 I2C driver and TMP101 temperature sensor
//send first byte to I2C bus with slave address
//Output: 
//Go is "1" to start communication

module Lab7I2Cphase1fall2018JJS_JJS(Go, SCL, SDA, Reset, clock, ClockLocked);

input Go, Reset, clock;
output SCL, ClockLocked;
inout SDA;
//send this byte as address
parameter FirstByte=8'b10010001;
//30kHz I2C speed at 60MHz clock
//parameter BaudRate=20'd30000, ClockFrequency=30'd60000000;
wire clk60MHz;
//These are simulation parameters. 
//Comment the following two lines before making bit stream file
parameter BaudRate=2, ClockFrequency=20;
assign clk60MHz=clock;
//disable Clock60MHz to simulate this circuit
//Clock60MHz SystemClock(clock,clk60MHz,ClockLocked);

wire WriteLoad, ReadorWrite, ShiftorHold, Select, BaudEnable, StartStopAck;
//module SquareWaveGenerator (WaveFrequency, ClockFrequency, StartStop, SignalOut, Reset, clock);
I2C_BaudRateGenerator  BaudUnit(BaudRate, ClockFrequency, BaudEnable, SCL, Reset, clk60MHz);

I2C_Controller  ControlUnit(Go, WriteLoad, ReadorWrite, ShiftorHold, Select, 
	BaudEnable, StartStopAck, Reset, SCL, clk60MHz);

//module I2C_DataUnit (WriteLoad, ReadorWrite, ShiftorHold, Select, SentData, 
//ReceivedData, SDA, StartStopAck, Reset, clock);
wire [7:0] ReceivedData;
I2C_DataUnit DataUnit(WriteLoad, ReadorWrite, ShiftorHold, Select, FirstByte, 
ReceivedData, SDA, StartStopAck, Reset, clk60MHz);

endmodule
