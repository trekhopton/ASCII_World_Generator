#ifndef TILE_H
#define TILE_H

#include <string>
#include "point.h"

class tile{
public:
    tile(point pos);
    tile();
    point getPos();
    void setPos(point pos);
    std::string getForeColour();
    std::string getBackColour();
    char getChar();
protected:
    point position;
    char character;
    std::string foreColour;
    std::string backColour;
};

#endif
