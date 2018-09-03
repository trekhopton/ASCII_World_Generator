all: main.cpp world.o biome.o lush.o dry.o cold.o plains.o forest.o desert.o rocky.o mountains.o snowy.o tile.o point.o colours.o tools.o water.o grass.o tree.o
	g++ main.cpp world.o biome.o lush.o dry.o cold.o plains.o forest.o desert.o rocky.o mountains.o snowy.o tile.o point.o colours.o tools.o water.o grass.o tree.o -o worldgen

world.o: world.h world.cpp
	g++ world.cpp -c

biome.o: biome.h biome.cpp
	g++ biome.cpp -c

lush.o: lush.h lush.cpp
	g++ lush.cpp -c

dry.o: dry.h dry.cpp
	g++ dry.cpp -c

cold.o: cold.h cold.cpp
	g++ cold.cpp -c

plains.o: plains.h plains.cpp
	g++ plains.cpp -c

forest.o: forest.h forest.cpp
	g++ forest.cpp -c

desert.o: desert.h desert.cpp
	g++ desert.cpp -c

rocky.o: rocky.h rocky.cpp
	g++ rocky.cpp -c

mountains.o: mountains.h mountains.cpp
	g++ mountains.cpp -c

snowy.o: snowy.h snowy.cpp
	g++ snowy.cpp -c

tile.o: tile.h tile.cpp
	g++ tile.cpp -c

point.o: point.h point.cpp
	g++ point.cpp -c

colours.o: colours.h colours.cpp
	g++ colours.cpp -c

tools.o: tools.h tools.cpp
	g++ tools.cpp -c

water.o: water.h water.cpp
	g++ water.cpp -c

grass.o: tiles/grass.h tiles/grass.cpp
	g++ tiles/grass.cpp -c

tree.o: tiles/tree.h tiles/tree.cpp
	g++ tiles/tree.cpp -c

clean:
	rm *.o worldgen
