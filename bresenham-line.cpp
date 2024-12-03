#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

// Function to draw a line using Bresenham's Line Algorithm
void bresenham(int x1, int y1, int x2, int y2) {
    // Calculate the differences in the x and y coordinates
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    
    // Calculate the decision parameter
    int sx = (x1 < x2) ? 1 : -1; // Determine the direction of x increment
    int sy = (y1 < y2) ? 1 : -1; // Determine the direction of y increment
    
    int err = dx - dy; // Initial error term

    while (1) {
        putpixel(x1, y1, WHITE); // Plot the current point

        // If the line has reached the destination point, break out of the loop
        if (x1 == x2 && y1 == y2) {
            break;
        }

        // Calculate the error values to decide the next point
        int e2 = 2 * err;
        if (e2 > -dy) {
            err -= dy; // Update error term
            x1 += sx;  // Move in the x direction
        }
        if (e2 < dx) {
            err += dx; // Update error term
            y1 += sy;  // Move in the y direction
        }
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, ""); // Initialize graphics mode

    // Define the coordinates of the two endpoints of the line
    int x1 = 50, y1 = 100;
    int x2 = 400, y2 = 300;

    // Call the Bresenham function to draw the line
    bresenham(x1, y1, x2, y2);

    getch(); // Wait for user input
    closegraph(); // Close the graphics window
    return 0;
}

