#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>

// Function to draw a line using the DDA algorithm
void DDA(int x1, int y1, int x2, int y2) {
    // Calculate the differences in the x and y coordinates
    int dx = x2 - x1;
    int dy = y2 - y1;

    // Calculate the number of steps required to draw the line
    int steps = (abs(dx) > abs(dy)) ? abs(dx) : abs(dy);

    // Calculate the increment in both x and y direction
    float Xinc = dx / (float)steps;
    float Yinc = dy / (float)steps;

    // Start from the first point (x1, y1)
    float x = x1;
    float y = y1;

    // Plot the points from (x1, y1) to (x2, y2)
    for (int i = 0; i <= steps; i++) {
        putpixel(round(x), round(y), WHITE); // Plot the current point
        x += Xinc; // Increment in x direction
        y += Yinc; // Increment in y direction
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, ""); // Initialize graphics mode

    // Define the coordinates of the two endpoints of the line
    int x1 = 50, y1 = 100;
    int x2 = 400, y2 = 300;

    // square
	DDA(100,100,100,200);
	DDA(200,100,200,200);
	DDA(100,100,200,100);
	DDA(100,200,200,200);
	
	// triangle
	DDA(150,0,100,100);
	DDA(150,0,200,100);	

    getch(); // Wait for user input
    closegraph(); // Close the graphics window
    return 0;
}

