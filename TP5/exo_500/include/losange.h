#ifndef __LOSANGE_H__
#define __LOSANGE_H__
#pragma once

#include "forme.h"

class losange : public forme
{
    public:
        losange();
        ~losange();
        void CalculArea();
        void CalculPerimeter();
        void CalculSideWidth();
};

losange::~losange(){}
losange::losange(){}

void losange::CalculArea(){
    setArea(getheight()*getWidth());
}

void losange::CalculPerimeter(){
    setPerimeter(getSideWidth()[0]*4);
}

void losange::CalculSideWidth(){
    std::vector<float> hypot(4);
    for(int i=0; i<4; i++){
        hypot[i] = pow((getWidth()/2),2)+pow((getheight()/2),2);
    }
    setSideWidth(hypot);
}

#endif