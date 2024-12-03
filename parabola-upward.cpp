#include<graphics.h>
#include<cmath>

int main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	
	int h= 300; // horizontal position of vertex
	int k =200; // vertical position of vertex
	
	float a = 0.01; // curvature

	// eqn : y = -a(x-h)^2 +k
	
	for(int x = 0; x<getmaxx();x++){
		int y = -a * pow((x-h),2)+k;
		putpixel(x,y,WHITE); 
	}
	getch();
	closegraph();
	return 0;
}
