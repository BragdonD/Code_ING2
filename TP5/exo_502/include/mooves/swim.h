#ifndef __SWIM_H__
#define __SWIM_H__

#include "moove.h"
#include "coordinates.h"

class swim : public moove
{
    private:

    public:
        swim();
        ~swim();
        void SwimUpward(int _speed, coordinates& _coord);
        void SwimDownward(int _speed, coordinates& _coord);
};

swim::swim():moove(-10,-1){}

swim::~swim(){}

void swim::SwimUpward(int _speed, coordinates& _coord){
    if(_coord.getY()+_speed<getPlafond())
        _coord.setY(_coord.getY()+_speed);
    else
        std::cout << "The dinosaur is already at the area limit." << std::endl;
}

void swim::SwimDownward(int _speed, coordinates& _coord){
    if(_coord.getY()-_speed<GetMinToMoove())
        _coord.setY(_coord.getY()-_speed);
    else
        std::cout << "The dinosaur is already at the area limit." << std::endl;
}

#endif