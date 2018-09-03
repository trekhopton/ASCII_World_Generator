#ifndef GRASS_H
#define GRASS_H

#include "tile.h"
#include "point.h"

class grass : public tile{
public:
    grass(point pos);
};

#endif
