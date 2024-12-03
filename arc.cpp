#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)""); // Initialize graphics mode

    // Center of the arc
    int x = 300, y = 300;
    int radius = 100;

    // Starting angle: 0° (right side)
    // Ending angle: 90° (top side)
    int startAngle = 0;
    int endAngle = 90;

    // Draw the arc
    arc(x, y, startAngle, endAngle, radius);

    getch(); // Wait for user input
    closegraph(); // Close graphics mode
    return 0;
}

