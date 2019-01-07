#include<conio.h>
#include<graphics.h>

void main()
{
	int gd=DETECT,gm;
	int top[]={300,100,400,100,480,200,220,200,300,100};
	initgraph(&gd,&gm,"C:/TURBOC3/BGI");
	drawpoly(5,top);
	line(150,200,550,200);
	line(150,200,150,250);
	line(550,200,550,250);
	circle(220,250,20);
	circle(480,250,20);
	line(150,250,200,250);
	line(550,250,500,250);
	line(240,250,460,250);


getch();
}