#include "grass.h"
#include "colours.h"

grass::grass(point pos) : tile::tile(pos){
    tile::character = '_';
    tile::foreColour = colours::green;
}
