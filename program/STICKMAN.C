#include<graphics.h>
#include<conio.h>

void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:/TURBOC3/BGI");
	circle(300,100,40);
	line(300,140,300,350);
	line(300,180,200,120);
	line(300,180,400,120);
	line(300,350,200,390);
	line(300,350,400,390);
	outtextxy(40,40,"~nike_0021");
getch();
}
