#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

int main() {
    const char* bmpFile = "bbtext.bmp"; // Path to your BMP image file
    
    int gd = DETECT, gm;
    initgraph(&gd, &gm, ""); // Initialize graphics mode

    // Read the BMP file and display it in the graphics window
    readimagefile(bmpFile, 0, 0, getmaxx(), getmaxy());

    // Get the width and height of the graphics window (image)
    int width = getmaxx() + 1;  // Add 1 to avoid out-of-bounds access
    int height = getmaxy() + 1; // Add 1 to avoid out-of-bounds access
    
    // Dynamically allocate a 2D array (pixelMatrix) to store pixel values
    int** pixelMatrix = (int**)malloc(height * sizeof(int*)); // Allocate memory for rows
    for (int i = 0; i < height; i++) {
        pixelMatrix[i] = (int*)malloc(width * sizeof(int)); // Allocate memory for each row (columns)
    }
    
    // Loop through every pixel in the graphics window and store color values in pixelMatrix
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            int color = getpixel(x, y); // Get the color of the pixel at (x, y)
            
            // Store non-zero color values (pixels that are not black)
            if (color != 0) {
                pixelMatrix[y][x] = color; // Store the color
            } else {
                pixelMatrix[y][x] = 0; // Store 0 for black or background color
            }
        }
    }
    
    // Print the coordinates of pixels that have non-zero color (colored pixels)
    printf("Pixel Coordinates:\n");
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            // Check if the pixel has a non-zero color value (not black)
            if (pixelMatrix[y][x] != 0) {
                printf("(%d, %d) ", x, y); // Print the coordinates of colored pixels
            }
        }
    }
    
    // Free the dynamically allocated memory for the 2D array
    for (int i = 0; i < height; i++) {
        free(pixelMatrix[i]); // Free each row of pixels
    }
    free(pixelMatrix); // Free the array of row pointers
    
    getch(); // Wait for user input to close the graphics window
    closegraph(); // Close the graphics window
    return 0;
}

