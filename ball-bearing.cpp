#include <graphics.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.14159265358979323846

void drawBallBearing() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    // Get screen dimensions
    int width = getmaxx();
    int height = getmaxy();

    // Define center of the screen
    int centerX = width / 2;
    int centerY = height / 2;

    // Define inner and outer circle radii
    int outerRadius = (height < width ? height : width) * 0.4;
    int innerRadius = outerRadius * 0.6;

    // Set colors
    int backgroundColor = WHITE;
    int circleColor = BLUE;
    int ballColor = RED;

    // Clear screen
    setbkcolor(backgroundColor);
    cleardevice();

    // Draw outer and inner circles
    setcolor(circleColor);
    circle(centerX, centerY, outerRadius);
    circle(centerX, centerY, innerRadius);

    // Calculate number of balls and ball radius
    // Use trigonometry to ensure balls touch each other
    int numBalls = 12;
    
    // Ball radius calculation to ensure complete contact
    float ballRadius = (outerRadius - innerRadius) / 2;
    float middleRadius = (outerRadius + innerRadius) / 2;

    // Draw balls
    setcolor(ballColor);
    setfillstyle(SOLID_FILL, ballColor);

    for (int i = 0; i < numBalls; i++) {
        // Calculate precise ball position
        float angle = 2 * PI * i / numBalls;
        int ballCenterX = centerX + middleRadius * cos(angle);
        int ballCenterY = centerY + middleRadius * sin(angle);

        // Draw filled circle for each ball
        fillellipse(ballCenterX, ballCenterY, ballRadius, ballRadius);
    }

    // Wait for a key press
    getch();

    // Close graphics
    closegraph();
}

int main() {
    drawBallBearing();
    return 0;
}
