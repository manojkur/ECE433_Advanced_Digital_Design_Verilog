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
				input rota2,
				input rotb2,
				output [3:0] red,
				output [3:0] green,
				output [3:0] blue,
				output reg [8:0] paddlePosition1,
				output reg [8:0] paddlePosition2,
				output reg hit1,
				output reg point_reset1,
				output reg hit2,
				output reg point_reset2,
				input Reset,
				input Clock);
		
// paddle movement		
reg [2:0] quadA1r, quadB1r;
always @(posedge Clock) quadA1r <= {quadA1r[1:0], rota1};
always @(posedge Clock) quadB1r <= {quadB1r[1:0], rotb1};

always @(posedge Clock)
if(quadA1r[2] ^ quadA1r[1] ^ quadB1r[2] ^ quadB1r[1])
begin
	if(quadA1r[2] ^ quadB1r[1]) begin
		if(paddlePosition1 < 508)        // make sure the value doesn't overflow
			paddlePosition1 <= paddlePosition1 + 3'd4;
	end
	else begin
		if(paddlePosition1 > 3)        // make sure the value doesn't underflow
			paddlePosition1 <= paddlePosition1 - 3'd4;
	end
end

reg [2:0] quadA2r, quadB2r;
always @(posedge Clock) quadA2r <= {quadA2r[1:0], rota2};
always @(posedge Clock) quadB2r <= {quadB2r[1:0], rotb2};

always @(posedge Clock)
if(quadA2r[2] ^ quadA2r[1] ^ quadB2r[2] ^ quadB2r[1])
begin
	if(quadA2r[2] ^ quadB2r[1]) begin
		if(paddlePosition2 < 508)        // make sure the value doesn't overflow
			paddlePosition2 <= paddlePosition2 + 3'd4;
	end
	else begin
		if(paddlePosition2 > 3)        // make sure the value doesn't underflow
			paddlePosition2 <= paddlePosition2 - 3'd4;
	end
end
		
// ball movement	
reg [9:0] ballX;
reg [8:0] ballY;
reg ballXdir, ballYdir;
reg bounceX, bounceY;

reg [9:0] death_ballX;
reg [8:0] death_ballY;
reg death_ballXdir, death_ballYdir;
reg death_bounceX, death_bounceY;
	
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

always @(posedge Clock) begin
	if (endOfFrame) begin // update ball position at end of each frame
		if (death_ballX == 0 && death_ballY == 0) begin // cheesy reset handling, assumes initial value of 0
			death_ballX <= 480;
			death_ballY <= 300;
		end
		else begin
			if (death_ballXdir ^ death_bounceX) 
				death_ballX <= death_ballX + 2'd2;
			else 
				death_ballX <= death_ballX - 2'd2;	

			if (death_ballYdir ^ death_bounceY) 
				death_ballY <= death_ballY + 2'd2;
			else
				death_ballY <= death_ballY - 2'd2;	
		end
	end	
end		

// sliding background
wire Slide;
reg [5:0] NumSlide;

//module Pulse1second(Reset,Pulse1s,Clock);
Pulse1second pulseUnit(
	.Reset(Reset),
	.Pulse1s(Slide),
	.Clock(Clock));

always @(posedge Slide) begin
	NumSlide = NumSlide == 0 ? 31: NumSlide - 1;
end

// pixel color	
reg [5:0] missTimer;	
wire visible = (xpos < 640 && ypos < 480);
wire top = (visible && ypos == 0);
wire bottom = (visible && ypos >= 476);
wire left = (visible && xpos <= 7);
wire right = (visible && xpos >= 630);
wire border = (visible && (left || right));
wire paddle1 = (xpos >= paddlePosition1+4 && xpos <= paddlePosition1+124 && ypos >= 430 && ypos <= 437);
wire paddle2 = (xpos >= paddlePosition2+4 && xpos <= paddlePosition2+124 && ypos >= 50 && ypos <= 57);
wire ball = (xpos >= ballX && xpos <= ballX+7 && ypos >= ballY && ypos <= ballY+7);
wire death_ball = (xpos >= death_ballX && xpos <= death_ballX+7 && ypos >= death_ballY && ypos <= death_ballY+7);
wire background = (visible && !(border || paddle1 || paddle2 || ball || death_ball));
wire [9:0] xposSlide = xpos+NumSlide;
wire [9:0] yposSlide = ypos+NumSlide;
wire checkerboard = (xposSlide[5] ^ yposSlide[5]);
wire missed = visible && missTimer != 0;

assign red   = { (missed || border || paddle1 || paddle2 || death_ball) , 3'b000 };
assign green = { !missed && (border || paddle1 || paddle2 || ball), 3'b000 };
assign blue  = { (!missed && (border || ball)), background && checkerboard, background && checkerboard, background && checkerboard }; 

// ball collision	
always @(posedge Clock) begin
	if (!endOfFrame) begin
		if (ball && (left || right))
			bounceX <= 1;
		if (ball && (top || bottom || (paddle1 && ballYdir) || (paddle2 && ~ballYdir)))
			begin
				bounceY <= 1;
				if (paddle1 && ballYdir)
					hit1 <= 1;
				if (paddle2 && ~ballYdir)
					hit2 <= 1;
			end
		if (ball && bottom)
			begin
				missTimer <= 63;
				point_reset1 <=1;
			end
		if (ball && top)
			begin
				missTimer <= 63;
				point_reset2 <=1;
			end
	end
	else begin
		hit1 <= 0;
		point_reset1 <=0;
		hit2 <= 0;
		point_reset2 <=0;
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

always @(posedge Clock) begin
	if (!endOfFrame) begin
		if (death_ball && (left || right))
			death_bounceX <= 1;
		if (death_ball && (top || bottom || (paddle1 && death_ballYdir) || (paddle2 && ~death_ballYdir)))
			begin
				death_bounceY <= 1;
				if (paddle1 && death_ballYdir)
					point_reset1 <= 1;
				if (paddle2 && ~death_ballYdir)
					point_reset2 <= 1;
			end
		if (death_ball && bottom)
			begin
				missTimer <= 63;
				point_reset1 <=1;
			end
		if (death_ball && top)
			begin
				missTimer <= 63;
				point_reset2 <=1;
			end
	end
	else begin
		hit1 <= 0;
		point_reset1 <=0;
		hit2 <= 0;
		point_reset2 <=0;
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
