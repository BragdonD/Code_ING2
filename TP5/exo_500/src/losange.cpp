#include <iostream>
#include "losange.h"

losange::~losange(){}
losange::losange(int _height, int _width, int _nbSide): forme(_height,_width, _nbSide){
    CalculSideWidth();
    CalculPerimeter();
    CalculArea();
    m_form = sf::CircleShape(getSideWidth()[0],4);
}

losange::losange(){}

void losange::setShape(sf::CircleShape& shape){
    m_form = shape;
}

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

std::ostream& operator<<(std::ostream& os, losange& losange){
    os << "Losange"<<std::endl;
    os << "Width : " << losange.getWidth() << std::endl;
    os << "Height : "<< losange.getheight() << std::endl;
    os << "Nb Side : "<< losange.getNbSide() << std::endl;
    for(int i=0; i<losange.getNbSide();i++){
        os << "Side n " << i << " = " << losange.getSideWidth()[i] << std::endl;
    }
    os << "Perimeter : "<<losange.getPerimeter() << std::endl;
    os << "Area : "<<losange.getArea() << std::endl;
    return os;
}
    