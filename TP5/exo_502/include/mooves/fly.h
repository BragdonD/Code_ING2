#ifndef FLY_H
#define FLY_H

#include "moove.h"
#include "coordinates.h"

class fly : public moove
{
    private:
          
    public:
        fly():moove(10,1){}
        ~fly(){}
};

#endif