#ifndef WALK_H
#define WALK_H

#include "moove.h"
#include "coordinates.h"

class walk : public moove
{
    private:
    public:
        walk():moove(0,0){}
        ~walk(){}
};

#endif