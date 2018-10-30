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
	input 	[19:0]	BaudRate,
	input 	[29:0]	ClockFrequency,
	input 	[7:0]	Chip,
	input 			Go,
	inout 			SDA,
	output 			SCL,
	output 	[7:0]	ReceivedData,
	output 			Done,
	input 			Reset,
	input 			clock);

	wire WriteLoad, ReadOrWrite, ShiftorHold, Select, BaudEnable, StartStopAck;
	//module SquareWaveGenerator (WaveFrequency, ClockFrequency, StartStop, SignalOut, Reset, clock);
	BaudRateGenerator  BaudUnit(
		.uartClock(SCL), 
		.Reset(Reset),
		.clock(clock),
		.enable(BaudEnable),
		.BaudRate(BaudRate),
		.ClockFrequency(ClockFrequency));


	ControllerReadTempI2C  ControllerReadTempI2C(
		.clock(clock),
		.ClockI2C(SCL),
		.Go(Go),
		.Reset(Reset),
		.SDA(SDA),
		.BaudEnable(BaudEnable),
		.Done(Done),
		.ReadOrWrite(ReadOrWrite),
		.Select(Select),
		.ShiftorHold(ShiftorHold),
		.StartStopAck(StartStopAck),
		.WriteLoad(WriteLoad));

	//module I2C_DataUnit (WriteLoad, ReadorWrite, ShiftorHold, Select, SentData, 
	//ReceivedData, SDA, StartStopAck, Reset, clock);
	I2C_DataUnit DataUnit(
		.WriteLoad(WriteLoad),
		.ReadOrWrite(ReadOrWrite), 
		.ShiftorHold(ShiftorHold), 
		.Select(Select),
		.SentData(Chip),
		.ReceivedData(ReceivedData), 
		.SDA(SDA),
		.StartStopAck(StartStopAck),
		.Reset(Reset),
		.clock(clock));


endmodule
