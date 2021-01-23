#include "igraphics.h"
int x=100,y=256;
int dy=5;

int scr=0;
int game;

char str[20];

int r1x=356,r1y=390;
int r2x=356,r2y=0;

int r3x=700,r3y=270;
int r4x=700,r4y=0;

int r5x=1000,r5y=0;
int r6x=1000,r6y=350;


void iDraw()
{
		if(game==0)
		{
			iShowBMP(0,0,"welcome1.bmp");
		}
		if(game==1)
		{
			iShowBMP(0, 0, "welcome1.bmp");
			iShowBMP(750, 315, "play2.bmp");
			iShowBMP(630, 150, "exit1.bmp");
	
		}
		if(game==2)
		{
			iShowBMP(0,0,"background6.bmp");
			iShowBMP(512,0,"nightbackground.bmp");
			iShowBMP(224,100,"right1.bmp");
			iShowBMP(736,100,"right1.bmp");

		}
		if(game==3)
		{
			iShowBMP(0,0,"background6.bmp");
			iSetColor(255,255,80);
			iFilledRectangle(r1x,r1y,35,162);
			iFilledRectangle(r2x,r2y,35,300);
	
			iSetColor(0,100,255);
			iFilledRectangle(r3x,r3y,35,242);
			iFilledRectangle(r4x,r4y,35,180);

			iSetColor(0,255,100);
			iFilledRectangle(r5x,r5y,35,260);
			iFilledRectangle(r6x,r6y,35,170);
			iText(900,480,"SCORE:", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(990,480,str,GLUT_BITMAP_TIMES_ROMAN_24);
			iShowBMP(x,y,"angrybird.bmp");

			iShowBMP(10,462,"leftarrow.bmp");
	
		}
			
		if(game==4)
		{

			iShowBMP(0,0,"nightbackground.bmp");
			
		
			iSetColor(255,255,80);
			iFilledRectangle(r1x,r1y,35,162);
			iFilledRectangle(r2x,r2y,35,300);
	
			iSetColor(0,100,255);
			iFilledRectangle(r3x,r3y,35,242);
			iFilledRectangle(r4x,r4y,35,180);

			iSetColor(0,255,100);
			iFilledRectangle(r5x,r5y,35,260);
			iFilledRectangle(r6x,r6y,35,170);

			
			iText(900,480,"SCORE:", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(990,480,str,GLUT_BITMAP_TIMES_ROMAN_24);
			iShowBMP(x,y,"angrybird.bmp");

			iShowBMP(10,462,"leftarrow.bmp");
	
		}
		if( x+36>=r2x && x+36<=r2x+35 && y<=300 ||
		x>=r2x && x<=r2x+35 && y<=300 ||

		x+36>=r1x && x+36<=r1x+35 && y+36>=r1y ||
		x>=r1x && x<=r1x+35 && y+36>=r1y ||

		x+36>=r4x && x+36<=r4x+35 && y<=180 ||
		x>=r4x && x<=r4x+35 && y<=180 ||

		x+36>=r3x && x+36<=r3x+35 && y+36>=r3y ||
		x>=r3x && x<=r3x+35 && y+36>=r3y ||

		x+36>=r5x && x+36<=r5x+35 && y<=262 ||
		x>=r5x && x<=r5x+35 && y<=262 ||

		x+36>=r6x && x+36<=r6x+35 && y+36>=r6y ||
		x>=r6x && x<=r6x+35 && y+36>=r6y || y==0)
	{
		game=5;
	}
		if(game==5)
		{

			//iShowBMP(0,0,"gameover.bmp");
			iShowBMP(300, 100, "playagain.bmp");
			//iShowBMP(600, 100, "exit1.bmp");
			iText(580,400,str,GLUT_BITMAP_TIMES_ROMAN_24);
			//iText(412,400,"YOUR SCORE:", GLUT_BITMAP_TIMES_ROMAN_24);
			scr=0;
		}


//place your drawing codes here
}/*
void score()
{
	
	if (game==3||game==4)
	{
		sprintf(str,"%d",scr);
		if(x>r2x+35 && x<r2x+41 || x>r4x+35 && x<r4x+41  || x>r5x+35 && x<r5x+41  )
		{
			sprintf(str,"%d",scr);
			scr++;
		}
	}
	if(game==2)
	{
		scr=0;
	}*/
}
void iMouseMove(int mx, int my)
{
//place your codes here
}

void iMouse(int button, int state, int mx, int my)
{
	//place your codes here
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
		if(game==1)
		{
			if (mx >= 750 && mx <= 878 && my >= 315 && my <= 379)
			{
				game=2;
	
			}
			else if(mx>=630 && mx<=758 && my>=150 && my<=214)
			{
				exit(0);
			}
	
		}
		if(mx >= 224 && mx <= 288 && my >= 100 && my <= 164)
		{
			game=3;
		}
		if(mx >= 736 && mx <= 800 && my >= 100 && my <= 164)
		{
			game=4;
		}
		if(mx >= 10 && mx <= 60 && my >=462 && my <= 502)
		{
			game=2;

			y=256;
			x=100;

			r1x=256,r1y=390;
			r2x=256,r2y=0;

			r3x=600,r3y=270;
			r4x=600,r4y=0;

			r5x=970,r5y=0;
			r6x=970,r6y=350;

		}
		
		/*if (mx >= 300 && mx <= 428 && my >= 100 && my <= 164)
		{
			game=2;
			y=256;
			x=100;
			r1x=256,r1y=390;
			r2x=256,r2y=0;

			r3x=600,r3y=270;
			r4x=600,r4y=0;

			r5x=970,r5y=0;
			r6x=970,r6y=350;

		
	
		}
		else if(mx>=600 && mx<=728 && my>=100 && my<=164)
		{
			exit(0);
		}
		
	}*/



	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{

		//place your codes here	
	}
			
		
}
void iKeyboard(unsigned char key)
{
//place your codes here
}

void iSpecialKeyboard(unsigned char key)
{
	if(key==GLUT_KEY_UP)
	{
		y+=20;
		if(y+36>=512)
		{
			y=512-36;
		}
	
	}
	if(key==GLUT_KEY_DOWN)
	{
		y-=15;
		if(y<=0)
		{
			y=0;
		}
	}
	if(key==GLUT_KEY_RIGHT)//SAIMUN
	{
		x+=15;
	
	}
	if(key==GLUT_KEY_LEFT)
	{
		x-=15;
		
	}
}
/*
void birdfall()
{
	if(game==3||game==4)
	{
		y-=dy;
	}
	
	
}
void pillermove()
{
	
	if(game==3||game==4)
	{
		r1x-=5;
		r2x-=5;
		r3x-=5;
		r4x-=5;
		r5x-=5;
		r6x-=5;

		if(r1x<=0)
		{
			r1x=1024;
		}
		if(r2x<=0)
		{
			r2x=1024;
		}
		if(r3x<=0)
		{
			r3x=1024;
		}
		if(r4x<=0)
		{
			r4x=1024;
		}
		if(r5x<=0)
		{
			r5x=1024;
		}
		if(r6x<=0)
		{
			r6x=1024;
		}
	}
	*/
	
}
void run()
{
	if(game==0)
	{
		game+=1;
	}
}



int main()
{   
	//iSetTimer(50,score);
	iSetTimer(700,run);
	//iSetTimer(70,birdfall);
	iSetTimer(50,pillermove);
	srand(time(NULL));
	//PlaySound("song\\abs",NULL,SND_LOOP|SND_ASYNC);
    //place your own initialization codes here.
	iInitialize(1024, 512);
	return 0;
}
//MY GANE