#include <graphics.h>
#include <stdio.h>
#include <conio.h>


int main() {
	int gd = DETECT, gm, color;
	initgraph(&gd, &gm, (char*)"");
	
	setcolor(LIGHTGRAY);
	circle(300, 300, 150);
	setfillstyle(SOLID_FILL, LIGHTGRAY);
	floodfill(300,300,LIGHTGRAY);
	
	setcolor(WHITE);
	circle(300, 300, 75);
	setfillstyle(SOLID_FILL, WHITE);
	floodfill(300, 300, WHITE);
	
	//inner circle
	setcolor(BLUE);
	circle(412.5, 300, 37.5);
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(412.5, 300, BLUE);
	
	setcolor(YELLOW);
	circle(187.5, 300, 37.5);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(187.5, 300, YELLOW);
	
	setcolor(RED);
	circle(300, 412.5, 37.5);
	setfillstyle(SOLID_FILL, RED);
	floodfill(300, 412.5, RED);
	
	int violet = COLOR(148,0,211);
	setcolor(violet);
	circle(300, 187.5, 37.5);
	setfillstyle(SOLID_FILL, violet);
	floodfill(300, 187.5, violet);
	
	setcolor(GREEN);
	circle(379.55, 379.55, 37.5);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(379.55, 379.55, GREEN);
	
	setcolor(LIGHTCYAN);
	circle(220.45, 379.55, 37.5);
	setfillstyle(SOLID_FILL, LIGHTCYAN);
	floodfill(220.45, 379.55, LIGHTCYAN);
	
	int orange = COLOR(255,165,0);
	setcolor(orange);
	circle(220.45, 220.45, 37.5);
	setfillstyle(SOLID_FILL, orange);
	floodfill(220.45, 220.45, orange);
	
	int indigo = COLOR(75,0,130);
	setcolor(indigo);
	circle(379.55, 220.45, 37.5);
	setfillstyle(SOLID_FILL, indigo);
	floodfill(379.55, 220.45, indigo);
	
	getch();
	closegraph();
	return 0;
}
