#ifndef SWIM_H
#define SWIM_H

#include "moove.h"
#include "coordinates.h"

class swim : public moove
{
    private:

    public:
        swim():moove(-10,-1){}
        ~swim(){}
        
};

#endif