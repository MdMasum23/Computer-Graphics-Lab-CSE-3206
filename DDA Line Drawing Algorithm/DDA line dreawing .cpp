#include <graphics.h>
#include <iostream>
#include <cmath>

using namespace std;

void drawLineDDA(int x1, int y1, int x2, int y2) {

    int dx = x2 - x1;
    int dy = y2 - y1;

    int steps = max(abs(dx), abs(dy));

    float Xinc = dx / (float)steps;
    float Yinc = dy / (float)steps;


    float x = x1;
    float y = y1;

    for (int i = 0; i <= steps; i++) {
        putpixel(round(x), round(y), WHITE);
        x += Xinc;
        y += Yinc;
        delay(50);
    }
}

int main() {

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1, y1, x2, y2;

    cout << "Enter the starting point (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter the ending point (x2, y2): ";
    cin >> x2 >> y2;


    drawLineDDA(x1, y1, x2, y2);


    getchar();
    closegraph();
    return 0;
}

