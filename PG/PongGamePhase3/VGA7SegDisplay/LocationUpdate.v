`timescale 1ns / 1ps

module LocationUpdate(InitialX,InitialY,Digit1X,Digit1Y, reset, clock);
input [9:0] InitialX,InitialY;
input reset, clock;
output reg [9:0] Digit1X, Digit1Y;
wire Timeout;
DelayTimer TimerUnit(1'b1,Timeout,clock);
always@(posedge clock)
if(reset==1) begin Digit1X=InitialX; Digit1Y=InitialY; end
else if(Timeout==1) begin Digit1X=(Digit1X+8'd100)%640; Digit1Y=(Digit1Y+6'd40)%480; end
else begin Digit1X=Digit1X; Digit1Y=Digit1Y; end
endmodule
