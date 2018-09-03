#ifndef TREE_H
#define TREE_H

#include "../tile.h"
#include "../point.h"

class tree : public tile{
public:
    tree(point pos);
    tree();
};

#endif
