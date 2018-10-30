//File Name: Lab7Phase2I2C2018fallJJS_JJS.v
//Author: Jianjian Song
//Date: Oct. 2018
//ECE433 Fall 2018
//ChipSelect is the lower 3-bit address of TM101 on SW7-5
//Read one of TMP101 temperature sensor
//send first byte to I2C bus with slave address
//Receive first byte from I2C bus as temperature
//Display the 8-bit temperature in Celsius on LEDs LD7-0 
//Display 2-digit temperature in Fahrenheit and 2-digit in Celsius 
//on 4-digit 7-segment display

module Lab7Phase2I2C2018fallJJS_JJS(
	input 			Reset, 
	input 			Mode, 
	input 			SystemClock, 
	input 			Start,
	input	[2:0]	ChipSelect,
	output			SCL, 
	output			ClockLocked, 
	output			Done,
	inout			SDA,
	output	[7:0] 	ReceivedData,
	output	[3:0] 	Transistors,
	output	[7:0] 	Display);

	parameter BaudRate=20'd20000, ClockFrequency=30'd80000000;
	wire clock;
	//simulation parameter
	//parameter BaudRate=2, ClockFrequency=12;

	Clock80MHz SystemClockUnit(SystemClock,clock,ClockLocked);

	ClockedPositiveOneShot StartOneShot(Start, StartReading, Reset, clock) ;

	wire [7:0] Chip;
	wire WriteLoad, ReadorWrite, ShiftorHold, Select, BaudEnable, StartStopAck;

	assign Chip = {4'b1001,ChipSelect,1'b1};

	Lab7I2Cphase1fall2018MK_LP ReadUnit(
		.BaudRate(BaudRate),
		.ClockFrequency(ClockFrequency),
		.Chip(Chip),
		.Go(StartReading||Mode),
		.SDA(SDA),
		.SCL(SCL),
		.ReceivedData(ReceivedData),
		.Done(Done),
		.Reset(Reset),
		.clock(clock));
		
	wire [3:0] First1, First0, Second1, Second0;
	wire [7:0] F1code,F0code,S1code,S0code;
	reg [7:0] Temperature;

	always@(posedge clock)
	 	if(Done==1) 
	 		Temperature <= ReceivedData;
		else
			Temperature <= Temperature;

	OneTemperatureConverter ConvertUnit(
		.Temp(Temperature),
		.First1(First1),
		.First0(First0),
		.Second1(Second1),
		.Second0(Second0));
	
	BCDto7Segment F1Unit(First1,F1code);
	BCDto7Segment F0Unit(First0,F0code);
	BCDto7Segment C1Unit(Second1, S1code);
	BCDto7Segment C0Unit(Second0,S0code);
	//7-segment display
	//module SevenSegDriver(D3, D2, D1, D0, Display, Reset, Clock, Select);
	SevenSegDriver DisplayUnit(F1code,F0code,S1code,S0code, Display, 
		Reset, clock, Transistors);
endmodule
