#include<conio.h>
#include<graphics.h>

void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:/TURBOC3/BGI");
	outtextxy(50,50,"nike_0021");
	setcolor(YELLOW);
	circle(350,200,150);
	setfillstyle(HATCH_FILL,YELLOW);
	floodfill(350,200,YELLOW);
	setcolor(BLACK);
	setfillstyle(SOLID_FILL,BLACK);
	fillellipse(250,180,10,15);
	fillellipse(450,180,10,15);
	arc(350,220,190,350,50);
	arc(350,220,190,350,51);
	arc(350,220,190,350,52);

getch();
}