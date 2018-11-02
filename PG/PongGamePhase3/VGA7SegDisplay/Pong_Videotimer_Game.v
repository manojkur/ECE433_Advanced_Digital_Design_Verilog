`timescale 1ns / 1ps

// Create Date:    07:41:47 06/21/2009 
// Design Name: 
// Module Name:    pong 
//Ported http://www.stevechamberlin.com/cpu/2009/06/21/fpga-pong/ to the Nexys 2 board 
//that we use at Temple U for the Digital Design class. 
//Only had to change the UCF and a little bit of logic. 
//Good starting point for VGA output from a FPGA.
//
// -----------------------------------------------
// 640x480 @ 60Hz, from a 25MHz input clock
// line duration is slightly longer than spec, but 
// number of lines is fewer to compensate
// -----------------------------------------------
module video_timer(input reset, input clk25,
						 output hsyncOut,
						 output vsyncOut,
						 output [9:0] xposOut,
						 output [9:0] yposOut);

reg [9:0] xpos;
reg [9:0] ypos;

wire endline = (xpos == 799);

always @(posedge clk25) begin
if(reset==1) xpos <= 0;
	else if (endline)
	  xpos <= 0;
	else
	  xpos <= xpos + 1'b1;
end

always @(posedge clk25) begin
	if(reset==1) ypos <= 0;
	else if (endline) begin
		if (ypos == 520)
			ypos <= 0;
		else
			ypos <= ypos + 1'b1;	
	end
end
	 
reg hsync, vsync;
always @(posedge clk25) begin
	hsync <= ~(xpos > 664 && xpos <= 759);  // active for 96 clocks
	vsync <= ~(ypos == 490 || ypos == 491);   // active for lines 490 and 491
end

assign hsyncOut = hsync;
assign vsyncOut = vsync;
assign xposOut = xpos;
assign yposOut = ypos;

endmodule


// -----------------------------------------------
// updates the ball and paddle positions, and
// determines the output video image
// -----------------------------------------------
module game(input reset, input clk25,
				input [9:0] xpos,
				input [9:0] ypos,
				input rota,
				input rotb,
				output [2:0] red,
				output [2:0] green,
				output [1:0] blue);
		
// paddle movement		
reg [8:0] paddlePosition;
reg [2:0] quadAr, quadBr;
always @(posedge clk25) quadAr <= {quadAr[1:0], rota};
always @(posedge clk25) quadBr <= {quadBr[1:0], rotb};

always @(posedge clk25)
if(reset==1) paddlePosition <= 0;
else
if(quadAr[2] ^ quadAr[1] ^ quadBr[2] ^ quadBr[1])
begin
	if(quadAr[2] ^ quadBr[1]) begin
		if(paddlePosition < 508)        // make sure the value doesn't overflow
			paddlePosition <= paddlePosition + 3'd4;
	end
	else begin
		if(paddlePosition > 3)        // make sure the value doesn't underflow
			paddlePosition <= paddlePosition - 3'd4;
	end
end
		
// ball movement	
reg [9:0] ballX;
reg [8:0] ballY;
reg ballXdir, ballYdir;
reg bounceX, bounceY;
	
wire endOfFrame = (xpos == 0 && ypos == 480);
	
always @(posedge clk25) begin
if(reset==1) begin ballX <= 480;
			ballY <= 300; end
	else
	if (endOfFrame) begin // update ball position at end of each frame
		if (ballX == 0 && ballY == 0) begin // cheesy reset handling, assumes initial value of 0
			ballX <= 480;
			ballY <= 300;
		end
		else begin
			if (ballXdir ^ bounceX) 
				ballX <= ballX + 3'd2;
			else 
				ballX <= ballX - 3'd2;	

			if (ballYdir ^ bounceY) 
				ballY <= ballY + 3'd2;
			else
				ballY <= ballY - 3'd2;	
		end
	end	
end		
		
// pixel color	
reg [5:0] missTimer;	
wire visible = (xpos < 640 && ypos < 480);
wire top = (visible && ypos <= 3);
wire bottom = (visible && ypos >= 476);
wire left = (visible && xpos <= 3);
wire right = (visible && xpos >= 636);
wire border = (visible && (left || right || top));
wire paddle = (xpos >= paddlePosition+4 && xpos <= paddlePosition+124 && ypos >= 440 && ypos <= 447);
wire ball = (xpos >= ballX && xpos <= ballX+7 && ypos >= ballY && ypos <= ballY+7);
wire background = (visible && !(border || paddle || ball));
wire checkerboard = (xpos[5] ^ ypos[5]);
wire missed = visible && missTimer != 0;

assign red   = { missed || border || paddle, 2'b00 };
assign green = { !missed && (border || paddle || ball), 2'b00 };
assign blue  = { !missed && (border || ball), background && checkerboard}; 
		
// ball collision	
always @(posedge clk25) begin
	if (!endOfFrame) begin
		if (ball && (left || right))
			bounceX <= 1;
		if (ball && (top || bottom || (paddle && ballYdir)))
			bounceY <= 1;
		if (ball && bottom)
			missTimer <= 63;
	end
	else begin
		if (ballX == 0 && ballY == 0) begin // cheesy reset handling, assumes initial value of 0
			ballXdir <= 1;
			ballYdir <= 1;
			bounceX <= 0;
			bounceY <= 0;
		end 
		else begin
			if (bounceX)
				ballXdir <= ~ballXdir;
			if (bounceY)
				ballYdir <= ~ballYdir;			
			bounceX <= 0;
			bounceY <= 0;
			if (missTimer != 0)
				missTimer <= missTimer - 1'B1;
		end
	end
end
		
endmodule
