#include <iostream>
#include "apple.h"

apple::apple(int n_X, int n_Y): m_X(n_X), m_Y(n_Y){}

apple::apple(){}

apple::~apple(){}

char apple::getCara() const{
    return m_cara;
}

int apple::getX() const{
    return m_X;
}

int apple::getY() const{
    return m_Y;
}

void apple::setX(int n_X){
    m_X = n_X;
}

void apple::setY(int n_Y){
    m_Y = n_Y;
}