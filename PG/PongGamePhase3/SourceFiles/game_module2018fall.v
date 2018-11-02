`timescale 1ns / 1ps
//Source: http://www.bigmessowires.com/2009/06/21/fpga-pong/
//
// -----------------------------------------------
// updates the ball and paddle positions, and
// determines the output video image
// This is the original game module with Reset being added
// -----------------------------------------------
module game_module2018fall(
				input [9:0] xpos,
				input [9:0] ypos,
				input rota1,
				input rotb1,
				output [3:0] red,
				output [3:0] green,
				output [3:0] blue,
				output reg [8:0] paddlePosition,
				output reg hit,
				output reg point_reset,
				input Reset,
				input Clock);
		
// paddle movement		
reg [2:0] quadAr, quadBr;
always @(posedge Clock) quadAr <= {quadAr[1:0], rota};
always @(posedge Clock) quadBr <= {quadBr[1:0], rotb};

always @(posedge Clock)
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
	
always @(posedge Clock) begin
	if (endOfFrame) begin // update ball position at end of each frame
		if (ballX == 0 && ballY == 0) begin // cheesy reset handling, assumes initial value of 0
			ballX <= 480;
			ballY <= 300;
		end
		else begin
			if (ballXdir ^ bounceX) 
				ballX <= ballX + 2'd2;
			else 
				ballX <= ballX - 2'd2;	

			if (ballYdir ^ bounceY) 
				ballY <= ballY + 2'd2;
			else
				ballY <= ballY - 2'd2;	
		end
	end	
end		
		
// pixel color	
reg [5:0] missTimer;	
wire visible = (xpos < 640 && ypos < 480);
wire top = (visible && ypos <= 10);
wire bottom = (visible && ypos >= 476);
wire left = (visible && xpos <= 10);
wire right = (visible && xpos >= 630);
wire border = (visible && (left || right || top));
wire paddle = (xpos >= paddlePosition+4 && xpos <= paddlePosition+124 && ypos >= 430 && ypos <= 437);
wire ball = (xpos >= ballX && xpos <= ballX+7 && ypos >= ballY && ypos <= ballY+7);
wire background = (visible && !(border || paddle || ball));
wire checkerboard = (xpos[5] ^ ypos[5]);
wire missed = visible && missTimer != 0;

assign red   = { missed || border || paddle, 3'b000 };
assign green = { !missed && (border || paddle || ball), 3'b000 };
assign blue  = { !missed && (border || ball), background && checkerboard, background && !checkerboard, background && !checkerboard  }; 

//reg hit;
// ball collision	
always @(posedge Clock) begin
	if (!endOfFrame) begin
		if (ball && (left || right))
			bounceX <= 1;
		if (ball && (top || bottom || (paddle && ballYdir)))
			begin
				bounceY <= 1;
				if (paddle && ballYdir)
					/*begin
						hit <= 0;
						ones <= ones == 9 ? 0 : ones + 1;
						if(ones == 9) begin
							tens <= tens == 9 ? 0 : tens + 1;
						end
					end*/
					hit <= 1;
			end
		if (ball && bottom)
			begin
				missTimer <= 63;
				point_reset <=1;
				/*ones <= 0;
				tens <= 0;*/
			end
	end
	else begin
		hit <= 0;
		point_reset <=0;
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
				missTimer <= missTimer - 2'd1;
		end
	end
end
		
endmodule
