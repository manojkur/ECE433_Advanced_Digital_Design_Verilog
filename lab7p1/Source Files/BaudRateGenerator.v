//File Name: BaudRateGenerator.v
//Author: Manoj Kurapati and Leela Pakanati
//Date: October 16, 2018
//ECE433 Fall 2018
//Phase 1 of Lab #7 I2C driver and TMP101 temperature sensor

module BaudRateGenerator (uartClock, Reset, clock, enable, BaudRate, ClockFrequency);
input Reset, clock;
input [19:0] BaudRate;  //up to 1,000,000
input [29:0] ClockFrequency; //up to 1GHz
input enable;
output reg  uartClock = 1; 
reg [15:0] 	baud_count;

 always @(posedge clock)
	if(Reset==1) begin baud_count <= 1'b0;
				uartClock <= 1'b1;
					end
	//	else if (baud_count == 8) 
	else if(enable)
		if (baud_count == ClockFrequency/(BaudRate*2)) begin
			baud_count <= 1'b1;
			uartClock <= !uartClock;
		end else begin
					baud_count <= baud_count + 1'b1;
			end
	else
		uartClock <= 1'b1;
endmodule
