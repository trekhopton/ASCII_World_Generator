#ifndef BIOME_H
#define BIOME_H

#include "world.h"
#include "tile.h"

class biome{
public:
    biome();
    tile getTileSet(int x,int y);
protected:
    tile tileSet[9];
};

#endif
