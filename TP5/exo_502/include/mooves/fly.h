#ifndef __FLY_H__
#define __FLY_H__

#include "moove.h"
#include "coordinates.h"

class fly : public moove
{
    private:
          
    public:
        fly();
        ~fly();
};

fly::fly():moove(10,1){}
fly::~fly(){}

#endif