#include "water.h"
#include "colours.h"

water::water(point pos) : tile::tile(pos){
    tile::character = '~';
    tile::foreColour = colours::blue;
    tile::backColour = colours::blueLB;
}
water::water(){
    tile::character = '~';
    tile::foreColour = colours::blue;
    tile::backColour = colours::blueLB;
}
