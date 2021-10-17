#ifndef __LOSANGE_H__
#define __LOSANGE_H__
#pragma once

#include "forme.h"

class losange : public forme
{
    private:
        float m_sideWidth;
    public:
        losange() = default;
        losange(float _width, float _height);
        losange(float _width, float _height, sf::Color _color);
        ~losange();
        void CalculArea();
        void CalculPerimeter();
        void setSideWidth(float _width);
        void CalculSideWidth();
        float getSideWidth() const;
};

losange::losange(){}
losange::~losange(){}
losange::losange(float _width, float _height){}
losange::losange(float _width, float _height, sf::Color _color){}

void losange::CalculArea(){
    setArea(getheight()*getWidth());
}

void losange::CalculPerimeter(){
    setPerimeter(getSideWidth()*4);
}

void losange::setSideWidth(float _width){
    m_sideWidth = _width;
}

void losange::CalculSideWidth(){
    float hypot(0.0);
    hypot = pow((getWidth()/2),2)+pow((getheight()/2),2);
    setSideWidth(hypot);
}

#endif