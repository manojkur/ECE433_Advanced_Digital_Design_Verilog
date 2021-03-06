`timescale 1ns / 1ps
//File Name: Lab7I2Cphase1fall2018MK_LP.v
//Author: Manoj Kurapati and Leela Pakanati
//Date: October 16, 2018
//ECE433 Fall 2018
//Phase 1 of Lab #7 I2C driver and TMP101 temperature sensor
//send first byte to I2C bus with slave address
//Output: 
//Go is "1" to start communication

module Lab7I2Cphase1fall2018MK_LP(
	input Go,
	inout SDA,
	output SCL,
	input Reset,
	input clock_input,
	output ClockLocked);

//send this byte as address
parameter FirstByte=8'b10010011;

//30kHz I2C speed at 60MHz clock
parameter BaudRate=20'd30000, ClockFrequency=30'd60000000;
wire clock;

//These are simulation parameters. 
//Comment the following two lines before making bit stream file

// assign clock = clock_input;
Clock60Mhz SystemClock(
 	.CLK_IN1(clock_input),
 	.CLK_OUT1(clock),
 	.LOCKED(ClockLocked));

wire GoOneShot;
ClockedPositiveOneShot GoOneShotUnit(Go, GoOneShot, Reset, clock);

wire WriteLoad, ReadOrWrite, ShiftorHold, Select, BaudEnable, StartStopAck;
//module SquareWaveGenerator (WaveFrequency, ClockFrequency, StartStop, SignalOut, Reset, clock);
BaudRateGenerator  BaudUnit(
	.uartClock(SCL), 
	.Reset(Reset),
	.clock(clock),
	.enable(BaudEnable),
	.BaudRate(BaudRate),
	.ClockFrequency(ClockFrequency));


I2C_Controller  ControlUnit(
	.clock(clock),
	.ClockI2C(SCL),
	.Go(GoOneShot),
	.Reset(Reset),
	.BaudEnable(BaudEnable),
	.ReadOrWrite(ReadOrWrite),
	.Select(Select),
	.ShiftorHold(ShiftorHold),
	.StartStopAck(StartStopAck),
	.WriteLoad(WriteLoad));

//module I2C_DataUnit (WriteLoad, ReadorWrite, ShiftorHold, Select, SentData, 
//ReceivedData, SDA, StartStopAck, Reset, clock);
wire [7:0] ReceivedData;
I2C_DataUnit DataUnit(
	.WriteLoad(WriteLoad),
	.ReadOrWrite(ReadOrWrite), 
	.ShiftorHold(ShiftorHold), 
	.Select(Select),
	.SentData(FirstByte),
	.ReceivedData(ReceivedData), 
	.SDA(SDA),
	.StartStopAck(StartStopAck),
	.Reset(Reset),
	.clock(clock));


endmodule
