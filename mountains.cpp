#include "cold.h"
#include "mountains.h"

mountains::mountains(){
    tileSet[1] = grass(point(0,0));
    tileSet[2] = grass(point(1,0));
    tileSet[3] = grass(point(2,0));
    tileSet[4] = grass(point(0,1));
    tileSet[5] = tree(point(1,1));
    tileSet[6] = grass(point(2,1));
    tileSet[7] = grass(point(0,2));
    tileSet[8] = grass(point(1,2));
    tileSet[9] = grass(point(2,2));
}
