#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__
#pragma once

#include "forme.h"

class triangle : public forme
{
    private:
        std::vector<float> m_sideWidth;
        std::vector<float> m_angles;
    public:
        triangle() = default;
        triangle(float _width, float _height);
        triangle(float _width, float _height, std::vector<float> _angles);
        triangle(float _width, float _height, sf::Color _color);
        ~triangle();
        void CalculArea();
        void CalculPerimeter();
        void setSideWidth(float _width, int _index);
        void CalculSideWidth();
        float getSideWidth() const;
};

triangle::triangle():m_sideWidth(3){}
triangle::~triangle(){}
triangle::triangle(float _width, float _height):m_sideWidth(3){}
triangle::triangle(float _width, float _height, std::vector<float> _angles):m_angles(_angles){}
triangle::triangle(float _width, float _height, sf::Color _color):m_sideWidth(3){}

void triangle::CalculArea(){
    setArea(getheight()*getWidth());
}

void triangle::CalculPerimeter(){
    setPerimeter(getSideWidth()*4);
}

void triangle::setSideWidth(float _width, int _index){
    m_sideWidth[_index] = _width;
}

void triangle::CalculSideWidth(){
    /*float hypot(0.0);
    hypot = pow((getWidth()/2),2)+pow((getheight()/2),2);
    setSideWidth(hypot);*/
}

#endif