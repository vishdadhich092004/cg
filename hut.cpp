#include<graphics.h>
#include<conio.h>

int main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm , (char*)"");
	
	// square
	line(100,100,100,200);
	line(200,100,200,200);
	line(100,100,200,100);
	line(100,200,200,200);
	
	// triangle
	line(150,0,100,100);
	line(150,0,200,100);
	
	// gate
	line(125,200,125,150);
	line(175,200,175,150);
	line(125,150,175,150);
	
	// circle
	circle(150,60,15);
	
	getch();
	closegraph();
	
}
