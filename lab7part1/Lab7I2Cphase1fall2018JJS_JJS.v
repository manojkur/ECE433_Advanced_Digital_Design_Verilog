`timescale 1ns / 1ps
//File Name: lab7I2Cphase1fall2018JJS_JJS.v
//Author: Jianjian Song
//Date: October 5, 2018
//ECE433 Fall 2018
//Phase 1 of Lab #7 I2C driver and TMP101 temperature sensor
//send first byte to I2C bus with slave address
//Output: 
//Go is "1" to start communication

module Lab7I2Cphase1fall2018MK_LP(Go, SCL, SDA, Reset, clock, ClockLocked);

input Go, Reset, clock_input;
output SCL, ClockLocked;
inout SDA;
//send this byte as address
parameter FirstByte=8'b10010001;
//30kHz I2C speed at 60MHz clock
//parameter BaudRate=20'd30000, ClockFrequency=30'd60000000;
wire clock;
//These are simulation parameters. 
//Comment the following two lines before making bit stream file
parameter BaudRate=30000, ClockFrequency=60000000;
//assign clk60MHz=clock;
//disable Clock60MHz to simulate this circuit
Clock60MHz SystemClock(
	.CLK_IN1(clock_input),
	.CLK_OUT1(clock),
	.LOCKED(ClockLocked));

wire WriteLoad, ReadorWrite, ShiftorHold, Select, BaudEnable, StartStopAck;
//module SquareWaveGenerator (WaveFrequency, ClockFrequency, StartStop, SignalOut, Reset, clock);
BaudRateGenerator  BaudUnit(
	.uartClock(SCL), 
	.Reset(Reset),
	.clock(clock),
	.enable(BaudEnable),
	.BaudRate(BaudRate),
	.ClockFrequency(ClockFrequency));


ControlUnit  ControlUnit(
	.clock(clock),
	.ClockI2C(SCL),,
	.Go(G0),
	.Reset(Reset),
	.BaudEnable(BaudEnable),
	.ReadorWrite(ReadorWrite),
	.Select(Select),
	.ShiftorHold(ShiftorHold),
	.StartStopAck(StartStopAck),
	.WriteLoad(WriteLoad));

//module I2C_DataUnit (WriteLoad, ReadorWrite, ShiftorHold, Select, SentData, 
//ReceivedData, SDA, StartStopAck, Reset, clock);
wire [7:0] ReceivedData;
I2C_DataUnit DataUnit(WriteLoad, ReadorWrite, ShiftorHold, Select, FirstByte, 
ReceivedData, SDA, StartStopAck, Reset, clock);

endmodule
