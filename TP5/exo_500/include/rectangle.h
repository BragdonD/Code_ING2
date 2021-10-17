#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__
#pragma once

#include "forme.h"

class rectangle : public forme
{
    private:
        float m_sideWidth;
    public:
        rectangle() = default;
        rectangle(float _width, float _height);
        rectangle(float _width, float _height, sf::Color _color);
        ~rectangle();
        void CalculArea();
        void CalculPerimeter();
        void setSideWidth(float _width);
        void CalculSideWidth();
        float getSideWidth() const;
};

rectangle::rectangle(){}
rectangle::~rectangle(){}
rectangle::rectangle(float _width, float _height){}
rectangle::rectangle(float _width, float _height, sf::Color _color){}

void rectangle::CalculArea(){
    setArea(getheight()*getWidth());
}

void rectangle::CalculPerimeter(){
    setPerimeter(getSideWidth()*4);
}

void rectangle::setSideWidth(float _width){
    m_sideWidth = _width;
}

void rectangle::CalculSideWidth(){
    float hypot(0.0);
    hypot = pow((getWidth()/2),2)+pow((getheight()/2),2);
    setSideWidth(hypot);
}

#endif