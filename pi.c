#include <stdio.h>
#include <math.h>

#define WIDTH 40
#define HEIGHT 20
#define PI 3.14159265

void drawPieSlice(char canvas[HEIGHT][WIDTH], int cx, int cy, int radius, double startAngle, double endAngle, char ch) {
    for (double angle = startAngle; angle <= endAngle; angle += 0.01) {
        for (int r = 0; r <= radius; r++) {
            int x = cx + (int)(r * cos(angle));
            int y = cy - (int)(r * sin(angle)); // Use minus to correct y direction
            if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT) {
                canvas[y][x] = ch;
            }
        }
    }
}

void drawCircleOutline(char canvas[HEIGHT][WIDTH], int cx, int cy, int radius, char ch) {
    for (double angle = 0; angle < 2 * PI; angle += 0.01) {
        int x = cx + (int)(radius * cos(angle));
        int y = cy - (int)(radius * sin(angle)); // Use minus to correct y direction
        if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT) {
            canvas[y][x] = ch;
        }
    }
}

void printCanvas(char canvas[HEIGHT][WIDTH]) {
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            putchar(canvas[y][x]);
        }
        putchar('\n');
    }
}

int main() {
    char canvas[HEIGHT][WIDTH];

    // Initialize canvas with spaces
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            canvas[y][x] = ' ';
        }
    }

    // Define pie slices angles
    double angles[] = {60, 120, 180, 240, 300, 360};
    char sliceChars[] = {'#', '@', '*', '%', '+', '='};

    double startAngle = 0;
    int radius = 8;
    int cx = WIDTH / 2;
    int cy = HEIGHT / 2;

    // Draw slices
    for (int i = 0; i < 6; i++) {
        drawPieSlice(canvas, cx, cy, radius, startAngle * PI / 180, angles[i] * PI / 180, sliceChars[i]);
        startAngle = angles[i];
    }

    // Draw circle outline
    drawCircleOutline(canvas, cx, cy, radius, '.');

    // Print canvas
    printCanvas(canvas);

    return 0;
}
