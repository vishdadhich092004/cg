#include<graphics.h>
#include<conio.h>

int main(){
	int gd = DETECT,gm;
	
	initgraph(&gd, &gm, (char*)"");
	
	circle(200,200,100);
	
	getch();
	closegraph();
	return 0;
}
