#include <iostream>
#include "coordinates.h"

coordinates::coordinates(){}
coordinates::coordinates(int _x, int _y):m_x(_x), m_y(_y){}
coordinates::~coordinates(){}
void coordinates::setX(int _x){m_x=_x;}
void coordinates::setY(int _y){m_y=_y;}
int coordinates::getX() const {return m_x;}
int coordinates::getY() const {return m_y;}

std::ostream& operator<<(std::ostream& os, const coordinates& _coord){
    os << "Coordinates : " << std::endl;
    os << "x = " << _coord.m_x << std::endl;
    os << "y = " << _coord.m_y << std::endl;
    return os;
}