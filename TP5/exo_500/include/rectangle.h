#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__
#pragma once

#include "forme.h"

class rectangle : public forme
{
    public:
        rectangle();
        ~rectangle();
        void CalculArea();
        void CalculPerimeter();
        void setAngles();
};

rectangle::rectangle(){}
rectangle::~rectangle(){}

void rectangle::CalculArea(){
    setArea(getheight()*getWidth());
}

void rectangle::CalculPerimeter(){
    setPerimeter(getWidth()*2 + getheight()*2);
}

void rectangle::setAngles(){
    for(int i=0; i<4; i++){
        m_angles[i] = 90;
    }
}

#endif