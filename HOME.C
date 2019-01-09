#include<graphics.h>
#include<conio.h>

void main()
{
	int gd=DETECT,gm;
	int tri[]={150,100,200,200,100,200,150,100};
	initgraph(&gd,&gm,"C:/TURBOC3/BGI");
	drawpoly(4,tri);
	rectangle(200,200,350,350);
	line(150,100,350,100);
	line(350,100,350,200);
	line(100,200,100,350);
	line(200,200,200,350);
	line(100,350,200,350);
	rectangle(135,300,165,350);
	rectangle(250,250,300,275);
	outtextxy(50,50,"~nike_0021`s home");

getch();
}
