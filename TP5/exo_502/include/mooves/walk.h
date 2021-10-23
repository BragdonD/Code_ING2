#ifndef __WALK_H__
#define __WALK_H__

#include "moove.h"
#include "coordinates.h"

class walk : public moove
{
    private:
    public:
        walk();
        ~walk();
};

walk::walk():moove(0,0){}
walk::~walk(){}


#endif