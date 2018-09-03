#include <iostream>
class biome;

#ifndef WORLD_H
#define WORLD_H

#include <string>

class world {
public:
    world();
    ~world();
    void setClimate(int newClimate);
    int getClimate();
    std::string getName();
    void setName(std::string newName);
private:
    int climate;
    int coldPercent;
    int lushPercent;
    int dryPercent;
    std::string name;
    biome *biomeArray;
    void drawOcean();
    void makeBiomes();
};

#endif
