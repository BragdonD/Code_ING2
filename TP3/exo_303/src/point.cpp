#include <iostream>
#include "point.h"


point::point(): m_x(0.0), m_y(0.0)
{}

point::point(float n_x, float n_y):m_x(n_x), m_y(n_y)
{}

point::~point()
{}

float point::getX() const{
    return m_x;
}

float point::getY() const{
    return m_y;
}

void point::setX(float n_x){
    m_x = n_x;
}

void point::setY(float n_y){
    m_y = n_y;
}