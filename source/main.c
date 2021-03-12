//Game Goes up to 19
//Francisco Cuellar

#include <maxmod.h>
#include <stdlib.h>
#include <stdio.h>
#include "gba.h"


void sync()
{
	while(REG_DISPLAY_VCOUNT >= 160);
	while(REG_DISPLAY_VCOUNT < 160);
}
// colour pallete
uint16 makeColor(uint8 r, uint8 g, uint8 b)
{
	return (r & 0x1f) | ((g & 0x1f) << 5) | ((b & 0x1f) << 10);
}

uint32 clamp(int value, int min, int max)
{
	return (value < min ? min : (value > max ? max : value));
}
//clamp

void drawRect(struct Rect rect, uint16 color)
{
	for(int y = 0; y < rect.h; y++)
	{
		for(int x = 0; x < rect.w; x++)
		{
			SCREENBUFFER[(rect.y + y) * SCREEN_WIDTH + rect.x + x] = color;
		}
	}
}
// draws multiple numbers
void drawNumber(int x)
{
	if (x==0)
	{
	vletterblock.x=50;
    vletterblock.y=2;
    vletterblock.w=2;
    vletterblock.h=10;
    hletterblock.x=50;
    hletterblock.y=2;
    hletterblock.w=5;
    hletterblock.h=2;
    drawRect(eraseblock, makeColor(0,0,0));
    drawRect(vletterblock, makeColor(0,0x1f,0x1f));
    vletterblock.x=55;
    drawRect(vletterblock, makeColor(0,0x1f,0x1f));

    drawRect(hletterblock, makeColor(0,0x1f,0x1f));
    hletterblock.y=10;
    drawRect(hletterblock, makeColor(0,0x1f,0x1f));

	}

	if (x==1)
	{
	vletterblock.x=50;
    vletterblock.y=2;
    vletterblock.w=2;
    vletterblock.h=10;
    hletterblock.x=50;
    hletterblock.y=2;
    hletterblock.w=5;
    hletterblock.h=2;
    drawRect(eraseblock, makeColor(0,0,0));
    drawRect(vletterblock, makeColor(0,0x1f,0x1f));

	}
	if (x==2)
	{
	vletterblock.x=50;
    vletterblock.y=2;
    vletterblock.w=2;
    vletterblock.h=10;
    hletterblock.x=50;
    hletterblock.y=2;
    hletterblock.w=5;
    hletterblock.h=2;
    drawRect(eraseblock, makeColor(0,0,0));
    drawRect(hletterblock, makeColor(0,0x1f,0x1f));
    vletterblock.x=53;
    vletterblock.h=6;
    drawRect(vletterblock, makeColor(0,0x1f,0x1f));
    hletterblock.y=6;
    drawRect(hletterblock,makeColor(0,0x1f,0x1f));
    hletterblock.y=10;
    drawRect(hletterblock, makeColor(0,0x1f,0x1f));
    vletterblock.x=50;
    vletterblock.y=6;
    drawRect(vletterblock, makeColor(0,0x1f,0x1f));
    

	}
		if (x==3)
	{
	vletterblock.x=50;
    vletterblock.y=2;
    vletterblock.w=2;
    vletterblock.h=10;
    hletterblock.x=50;
    hletterblock.y=2;
    hletterblock.w=5;
    hletterblock.h=2;
    drawRect(eraseblock, makeColor(0,0,0));
    vletterblock.x=53;
	drawRect(vletterblock, makeColor(0,0x1f,0x1f));
	drawRect(hletterblock, makeColor(0,0x1f,0x1f));
	hletterblock.y=6;
	drawRect(hletterblock, makeColor(0,0x1f,0x1f));
	hletterblock.y=10;
	drawRect(hletterblock, makeColor(0,0x1f,0x1f));

	}
	if (x==4)
	{
	vletterblock.x=50;
    vletterblock.y=2;
    vletterblock.w=2;
    vletterblock.h=10;
    hletterblock.x=50;
    hletterblock.y=2;
    hletterblock.w=5;
    hletterblock.h=2;
    drawRect(eraseblock, makeColor(0,0,0));
    vletterblock.x=55;

    drawRect(vletterblock, makeColor(0,0x1f,0x1f));
    vletterblock.x=50;
    vletterblock.h=5;
    drawRect(vletterblock, makeColor(0,0x1f,0x1f));
    hletterblock.y=7;
    drawRect(hletterblock, makeColor(0,0x1f,0x1f));

	}
	if (x==5)
	{
	vletterblock.x=50;
    vletterblock.y=2;
    vletterblock.w=2;
    vletterblock.h=10;
    hletterblock.x=50;
    hletterblock.y=2;
    hletterblock.w=5;
    hletterblock.h=2;
    drawRect(eraseblock, makeColor(0,0,0));
    drawRect(hletterblock, makeColor(0,0x1f,0x1f));
    vletterblock.x=50;
    vletterblock.h=6;
    drawRect(vletterblock, makeColor(0,0x1f,0x1f));
    hletterblock.y=6;
    drawRect(hletterblock,makeColor(0,0x1f,0x1f));
    hletterblock.y=10;
    drawRect(hletterblock, makeColor(0,0x1f,0x1f));
    vletterblock.x=53;
    vletterblock.y=6;
    drawRect(vletterblock, makeColor(0,0x1f,0x1f));
    

	}
	if (x==6)
	{
	vletterblock.x=50;
    vletterblock.y=2;
    vletterblock.w=2;
    vletterblock.h=10;
    hletterblock.x=50;
    hletterblock.y=2;
    hletterblock.w=5;
    hletterblock.h=2;
    drawRect(eraseblock, makeColor(0,0,0));
    drawRect(hletterblock, makeColor(0,0x1f,0x1f));
    vletterblock.x=50;
    vletterblock.h=10;
    drawRect(vletterblock, makeColor(0,0x1f,0x1f));
    hletterblock.y=6;
    drawRect(hletterblock,makeColor(0,0x1f,0x1f));
    hletterblock.y=10;
    drawRect(hletterblock, makeColor(0,0x1f,0x1f));
    vletterblock.x=50;
    vletterblock.y=6;
    vletterblock.h=4;
    drawRect(vletterblock, makeColor(0,0x1f,0x1f));
    vletterblock.x=53;
    drawRect(vletterblock, makeColor(0,0x1f,0x1f));
    

	}
	if (x==7)
	{
	vletterblock.x=50;
    vletterblock.y=2;
    vletterblock.w=2;
    vletterblock.h=10;
    hletterblock.x=50;
    hletterblock.y=2;
    hletterblock.w=5;
    hletterblock.h=2;
    drawRect(eraseblock, makeColor(0,0,0));
    drawRect(hletterblock, makeColor(0,0x1f,0x1f));
    vletterblock.x=53;
    vletterblock.h=10;
    drawRect(vletterblock, makeColor(0,0x1f,0x1f));
    
    

	}
	if (x==8)
	{
	vletterblock.x=50;
    vletterblock.y=2;
    vletterblock.w=2;
    vletterblock.h=10;
    hletterblock.x=50;
    hletterblock.y=2;
    hletterblock.w=5;
    hletterblock.h=2;
    drawRect(eraseblock, makeColor(0,0,0));
    drawRect(hletterblock, makeColor(0,0x1f,0x1f));
    vletterblock.x=50;
    vletterblock.h=10;
    drawRect(vletterblock, makeColor(0,0x1f,0x1f));
    hletterblock.y=6;
    drawRect(hletterblock,makeColor(0,0x1f,0x1f));
    hletterblock.y=10;
    drawRect(hletterblock, makeColor(0,0x1f,0x1f));
    vletterblock.x=53;
    vletterblock.y=2;
    vletterblock.h=10;
    drawRect(vletterblock, makeColor(0,0x1f,0x1f));
    

	}
	if (x==9)
	{
	vletterblock.x=50;
    vletterblock.y=2;
    vletterblock.w=2;
    vletterblock.h=10;
    hletterblock.x=50;
    hletterblock.y=2;
    hletterblock.w=5;
    hletterblock.h=2;
    drawRect(eraseblock, makeColor(0,0,0));
    drawRect(hletterblock, makeColor(0,0x1f,0x1f));
    vletterblock.x=55;

    drawRect(vletterblock, makeColor(0,0x1f,0x1f));
    vletterblock.x=50;
    vletterblock.h=5;
    drawRect(vletterblock, makeColor(0,0x1f,0x1f));
    hletterblock.x=50;
    hletterblock.y=5;
    drawRect(hletterblock, makeColor(0,0x1f,0x1f));

	}
}
	
	
void drawTen() // draws a one so it can count to 10-19
{
	
		vletterblock.x=43;
		vletterblock.y=2;
		vletterblock.w=2;
		vletterblock.h=10;
		hletterblock.x=43;
		hletterblock.y=1;
		hletterblock.w=5;
		hletterblock.h=2;
		drawRect(vletterblock, makeColor(0,0x1f,0x1f));
}
	
	
	
	

int main()
{
	REG_DISPLAY = VIDEOMODE | BGMODE;
	
	irqInit();

	irqSet( IRQ_VBLANK, mmVBlank );
	irqEnable(IRQ_VBLANK);


	


	int top = 20;
	int left = 0;
	int ballTop = 76;
	int ballLeft = 126;
	int speedRight = 2;
	int speedDown = 2;
	
	player.x = left;
	player.y = top;
	player.w = 4;
	player.h = 32;
	scoreline.x=0;
	scoreline.y= 17;
	scoreline.w=SCREEN_WIDTH;
	scoreline.h=2;

	score.x = 40;
	score.y = 10;
	score.w = 2;
	score.h = 7;

	prevPlayer = player;
	
	ball.x = ballLeft;
	ball.y = ballTop;
	ball.w = 8;
	ball.h = 8;
    vletterblock.x=1;
    vletterblock.y=1;
    vletterblock.w=2;
    vletterblock.h=4;
    hletterblock.x=1;
    hletterblock.y=1;
    hletterblock.w=4;
    hletterblock.h=2;
    eraseblock.h=16;
    eraseblock.w=18;
    eraseblock.x=50;
    eraseblock.y=1;

    int rip = 0;
	
	prevBall = ball;
	
	
	while(1)
	{


		VBlankIntrWait();
		mmFrame();
		sync();
		drawRect(scoreline, makeColor(10,10,10));
		drawRect(prevPlayer, makeColor(0,0,0));
		drawRect(prevBall, makeColor(0,0,0));
		drawNumber(rip);
		//drawNumberB();
		//drawScore();

		ballLeft += speedRight;
		ballTop += speedDown;
		
		if(!((REG_KEY_INPUT) & DOWN))
			top+=3;
		if(!((REG_KEY_INPUT) & UP))
			top-=3;
		/*
		if(!((REG_KEY_INPUT) & LEFT))
			left--;
		if(!((REG_KEY_INPUT) & RIGHT))
			left++;
		left = clamp(left, 0, SCREEN_WIDTH-8);
		*/

		top = clamp(top, 20, SCREEN_HEIGHT-player.h);
		ballLeft = clamp(ballLeft, 0, SCREEN_WIDTH-ball.w);
		ballTop = clamp(ballTop, 0, SCREEN_HEIGHT-ball.h);
		
		if(ballLeft == 0 || ballLeft == SCREEN_WIDTH-ball.w)
			speedRight = -speedRight;
		if(ballTop == 20 || ballTop == SCREEN_HEIGHT-ball.h)
			speedDown = -speedDown;
		
		player.x = left;
		player.y = top;
		prevPlayer = player;
		
		ball.x = ballLeft;
		ball.y = ballTop;
		prevBall = ball;
		// player and ball
		drawRect(ball, makeColor(0x1f,0x1f,0));
		drawRect(player, makeColor(0,0x1f,0x1f));
		
		if(ball.x==4)
		{
			if(ball.y>=(player.y))
			{
				if(ball.y<=(player.y+32))
				{
					speedRight = -speedRight;
					//drawRect(score, makeColor(0x1f, 0x11, 0));
					//score.x = score.x + 10;
					if (rip<9)
					{ //counts the score
						rip++;
					}
					else
					{
						drawTen();
						rip =0;
					}
				}

			}
		}
		
	}
	return 0;
}
