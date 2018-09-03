#ifndef WATER_H
#define WATER_H

#include "tile.h"
#include "point.h"

class water : public tile{
public:
    water(point pos);
    water();
};

#endif
