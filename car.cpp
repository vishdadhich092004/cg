#include<graphics.h>
#include<conio.h>

int main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	
	// center line
	line(300,300,400,300);
	// left circle
	circle(275, 300,25);
	//right circle
	circle(425,300,25);
	// left bottom line
	line(200,300,250,300);
	// right bottom line
	line(450,300,500,300);
	// left perpendicular line
	line(200,250,200,300);
	// right perpendiucular line
	line(500,250,500,300);
	// left upper line
	line(200,250,300,150);
	// right upper line
	line(500,250,400,150);
	// top line
	line(300,150,400,150);
	getch();
	closegraph();
	return 0;
}
