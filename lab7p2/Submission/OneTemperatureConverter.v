module OneTemperatureConverter(
	input [7:0] Temp, 
	output [3:0] First1, 
	output [3:0] First0, 
	output [3:0] Second1, 
	output [3:0] Second0); 

assign First1 = (Temp * 18 / 10 + 32) / 10;
assign First0 = (Temp * 18 / 10 + 32) % 10; 
assign Second1 = Temp / 10;
assign Second0 = Temp % 10; 
 
endmodule 