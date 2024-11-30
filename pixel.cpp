#include<graphics.h>
#include<conio.h>

int main(){
	
	int gd = DETECT	,gm;
	initgraph(&gd, &gm,(char*)"");
	
	putpixel(100,200,WHITE);
	getch();
	closegraph();
	
	return 0;
}
