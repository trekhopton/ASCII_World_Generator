#include "tile.h"

tile::tile(point pos){
    position = pos;
}
tile::tile(){
}
point tile::getPos(){
    return position;
}
void tile::setPos(point pos){
    position = pos;
}
std::string tile::getForeColour(){
    return foreColour;
}
std::string tile::getBackColour(){
    return backColour;
}
char tile::getChar(){
    return character;
}
