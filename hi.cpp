#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, "");

    // Set color and draw a circle at (250, 200) with radius 100
    setcolor(WHITE);
    circle(250, 200, 100);

    // Wait for user input before closing
    getch();
    closegraph();

    return 0;
}
