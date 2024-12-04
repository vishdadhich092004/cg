#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include<cmath>

#define PI 3.14159

int main() {
	int gd = DETECT, gm, color;
	initgraph(&gd, &gm, (char*)"");
	
	int centreX = 300;
	int centreY = 250;
	int radius = 40;
	circle(centreX, centreY, radius);
	
	for(int i=0;i<360;i+=60){
		int x = centreX + 2*radius * cos((i*PI)/180);
		int y = centreY + 2*radius * sin((i*PI)/180);
		circle(x,y, radius);
	}
	int outerRadius = 3* radius;
	circle(centreX, centreY, outerRadius);
	
	getch();
	closegraph();
	return 0;
}
