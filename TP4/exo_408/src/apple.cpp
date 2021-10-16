#include <iostream>
#include "apple.h"

apple::apple(){}
apple::~apple(){}
void apple::setPosition(coordinates& _coord){m_coord = _coord;}
void apple::setPosition(int _x, int _y){m_coord(_x,_y);}
void apple::setCara(int _cara){m_cara=_cara;}
int apple::getX() const{return m_coord[0];}
int apple::gety() const{return m_coord[1];}
coordinates apple::getCoord() const{return m_coord;}
char apple::getCara() const{return m_cara;} 