#include<graphics.h>
#include<conio.h>

int main()
{
	int gd = DETECT ,gm;
	initgraph(&gd, &gm, (char*)"");
	
//	1st sq(outer)
	line(50,50,400,50);
	line(50,50,50,400);
	line(400,50,400,400);
	line(400,400,50,400);
// 2nd sq
	line(75,75,375,75);
	line(75,75,75,375);
	line(375,75,375,375);
	line(75,375,375,375);
// 3rd sq
	line(100,100,350,100);
	line(100,100,100,350);
	line(350,100,350,350);
	line(100,350,350,350);
// 4th sq
	line(125,125,325,125);
	line(125,125,125,325);
	line(325,125,325,325);
	line(125,325,325,325);
// 5th sq
	line(150,150,300,150);
	line(150,150,150,300);
	line(300,150,300,300);
	line(150,300,300,300);
// 6th sq
	line(175,175,275,175);
	line(175,175,175,275);
	line(275,175,275,275);
	line(175,275,275,275);
//7th sq (inner)
	line(200,200,250,200);
	line(200,200,200,250);
	line(250,200,250,250);
	line(200,250,250,250);
	getch();
	closegraph();
	
	return 0;
}
