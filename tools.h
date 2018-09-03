#ifndef TOOLS_H
#define TOOLS_H

#include <iostream>
#include "point.h"

class tools{
public:
    enum direction
    {
        up = 'A',
        down = 'B',
        right = 'C',
        left = 'D'
    };
    static void clearScreen();
    static void moveCursor(direction dir, int dist);
    static void moveCursor(direction dir);
    static void setCursor(point pos);
    static void setCursor(int x, int y);
    static point screenSize();
    static void endColour();
};

#endif
