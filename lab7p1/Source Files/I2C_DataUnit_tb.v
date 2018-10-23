`timescale 1ns / 1ps

module I2C_DataUnit_tb;
reg WriteLoad, ReadorWrite, ShiftorHold, Select, StartStopAck, Reset, clock;
reg [7:0] SentData;
	reg [19:0] BaudRate;
	reg [29:0] ClockFrequency;
	wire [7:0] ReceivedData;
	wire SDA;
//module I2C_DataUnit (WriteLoad, ReadorWrite, ShiftorHold, Select, SentData, 
//ReceivedData, SDA, StartStopAck, Reset, clock);
 I2C_DataUnit uut (WriteLoad, ReadorWrite, ShiftorHold, Select, SentData, 
ReceivedData, SDA, StartStopAck, Reset, clock);
	 
initial begin WriteLoad = 0;   ReadorWrite = 0; ShiftorHold = 0;  Select = 0;  
SentData = 0; StartStopAck = 0; Reset = 0;
clock = 0; BaudRate = 0; ClockFrequency = 0; end
	always #4 clock=~clock;
		always #10 ShiftorHold=~ShiftorHold;
	initial fork
	#0 Reset = 1;  #13 Reset = 0;    #0 BaudRate = 2;   #0 ClockFrequency = 12;
	#0 WriteLoad = 0;   #15 WriteLoad = 1;  #23 WriteLoad = 0;  
	#56 WriteLoad = 1;   #56 WriteLoad = 0;
	#0 SentData = 8'b11001010;
	#0 Select = 0;  	#23 Select = 1;   #56 Select = 0; #90 Select = 0;
	#0 StartStopAck = 1;   #21 StartStopAck = 0;  #67 StartStopAck = 1; #78 StartStopAck = 0;
	#0 ReadorWrite = 0;  #15 ReadorWrite = 1;   #26 ReadorWrite = 0; #90 ReadorWrite = 0; 
	#120 $stop;
	join
endmodule


