#include "biome.h"

biome::biome(){
}

tile biome::getTileSet(int x, int y){
    return tileSet[3*x+y];
}
