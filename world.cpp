#include "world.h"
#include "biome.h"
#include "tools.h"
#include "plains.h"
#include "water.h"
#include "forest.h"
#include "desert.h"
#include "rocky.h"
#include "mountains.h"
#include "snowy.h"
#include "colours.h"
#include <stdlib.h>
#include <time.h>  

world::world(){
    //input world climate and check if it's valid
    std::cout
    << colours::blueL << "1 "
    << colours::cyan << "2 "
    << colours::greenL << "3 "
    << colours::yellowL << "4 "
    << colours::redL << "5"
    << colours::end
    << std::endl;

    std::cin >> climate;

    switch(climate){
        case 1:
            lushPercent = 20;
            coldPercent = 80;
            dryPercent = 0;
            break;
        case 2:
            lushPercent = 40;
            coldPercent = 50;
            dryPercent = 10;
            break;
        case 3:
            lushPercent = 60;
            coldPercent = 20;
            dryPercent = 20;
            break;
        case 4:
            lushPercent = 40;
            coldPercent = 10;
            dryPercent = 50;
            break;
        case 5:
            lushPercent = 20;
            coldPercent = 0;
            dryPercent = 80;
            break;
        default:
            std::cout << "please enter a valid climate";
            std::cin >> climate;
    }
    //input name of world
    std::cin >> name;
    // fresh page
    tools::clearScreen();
    tools::setCursor(0,0);
    // draws the surrounding ocean
    drawOcean();
    //create and display biomes
    makeBiomes();
    // colour to default and cursor to bottom of terminal
    tools::endColour();
    tools::setCursor(0,tools::screenSize().y);
}
world::~world(){
    delete [] biomeArray;
}
void world::setClimate(int newClimate){
    climate = newClimate;
}
int world::getClimate(){
    return climate;
}
std::string world::getName(){
    return name;
}
void world::setName(std::string newName){
    name = newName;
}

void world::drawOcean(){

    // drawing the ocean top and bottom
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < tools::screenSize().x; j++){
            tile w = water();
            std::cout << w.getForeColour() << w.getChar();
        }
        tools::setCursor(0,i+2);
    }
    tools::setCursor(0,tools::screenSize().y-3);
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < tools::screenSize().x; j++){
            tile w = water();
            std::cout << w.getForeColour() << w.getChar();
        }
        tools::setCursor(0,tools::screenSize().y+i-2);
    }

    // drawing the ocean's sides
    tools::setCursor(0,4);
    for(int i = 0; i < tools::screenSize().y-7; i++){
        for(int j = 0; j < 3; j++){
            tile w = water();
            std::cout << w.getForeColour() << w.getChar();
        }
        tools::setCursor(0,5+i);
    }
    tools::setCursor(tools::screenSize().x-2,4);
    for(int i = 0; i < tools::screenSize().y-7; i++){
        for(int j = 0; j < 3; j++){
            tile w = water();
            std::cout << w.getForeColour() << w.getChar();
        }
        tools::setCursor(tools::screenSize().x-2,5+i);
    }
    std::cout << colours::end;
}

void world::makeBiomes(){
    //set the cursor to viewable position
    tools::setCursor(4,4);
    //width and height of biomes
    int biomeSize = 3;
    //amount of biomes on each axis
    int biomeArrayX = (tools::screenSize().x-6)/biomeSize;
    int biomeArrayY = (tools::screenSize().y-7)/biomeSize;
    //number of biomes altogether
    int biomeAmount = biomeArrayX*biomeArrayY;
    //create an array of biomes
    biomeArray = new biome[biomeAmount];
    //set seed for random numbers
    srand(time(NULL));
    // create biomes
    for(int i = 0; i < biomeArrayX; i++){
        for(int j = 0; j < biomeArrayY; j++){
            // random number between 1 and 100 to decide which biome will go in array
            int climateRand = rand() % 100 + 1;
            // random number chooses between 2 types of climate biomes
            int biomeRand = rand() % 2 + 1;

            if(climateRand >= 1 && climateRand <= coldPercent){
                if(biomeRand == 1){
                    biomeArray[biomeArrayX*i+j] = snowy();
                } else {
                    biomeArray[biomeArrayX*i+j] = mountains();
                }
            }
            else if(climateRand > coldPercent && climateRand <= coldPercent + lushPercent){
                if(biomeRand == 1){
                    biomeArray[biomeArrayX*i+j] = plains();
                } else {
                    biomeArray[biomeArrayX*i+j] = forest();
                }
            }
            else if(climateRand > coldPercent + lushPercent && climateRand <= coldPercent + lushPercent + dryPercent){
                if(biomeRand == 1){
                    biomeArray[biomeArrayX*i+j] = desert();
                } else {
                    biomeArray[biomeArrayX*i+j] = rocky();
                }
            } else {
                std::cout << "invalid value was chosen";
            }
        }
    }

    //display biomes
    for(int i = 0; i < biomeArrayX; i++){

        for(int j = 0; j < biomeArrayY; j++){
            for(int k = 0; k < biomeSize; k++){
                for(int l = 0; l < biomeSize; l++){
                    std::cout << biomeArray[i*biomeArrayX+j].getTileSet(k,l).getChar();
                }
                tools::moveCursor(tools::down, 1);
                tools::moveCursor(tools::left, 3);
            }
        }
    }
}
