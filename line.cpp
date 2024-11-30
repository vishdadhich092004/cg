#include<graphics.h>
#include<conio.h>

int main(){
	int gd = DETECT, gm;
	
	initgraph(&gd, &gm , (char*)"");
	
	line(100,100,400,400);
	
	getch();
	closegraph();
	
	return 0;
}
