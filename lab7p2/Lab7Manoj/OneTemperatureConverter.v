`timescale 1ns / 1ps

module OneTemperatureConverter(Temp, First1, First0, Second1, Second0); 
input [7:0] Temp; 
output [3:0] First1, First0, Second1, Second0; 

assign First1 = (Temp*18/10+32)/10; 
assign First0 = (Temp*18/10+32)%10; 
assign Second1 = Temp/10; 
assign Second0 = Temp%10; 

endmodule 
