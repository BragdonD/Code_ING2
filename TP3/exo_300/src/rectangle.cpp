#include <iostream>
#include "rectangle.h"

rectangle::rectangle(float n_width, float n_height):m_width(n_width), m_height(n_height)
{}

rectangle::rectangle(): m_width(0.0), m_height(0.0)
{}

rectangle::~rectangle(){}

bool rectangle::setWidth(float n_width){
    if(n_width>0){
        m_width = n_width;
        return true;
    }
    else{
        std::cout << "The side of a rectangle can't be negativ" << std::endl;
        return false;
    } 
}

bool rectangle::setHeight(float n_height){
    if(n_height>0){
        m_height = n_height;
        return true;
    }
    else{
        std::cout << "The side of a rectangle can't be negativ" << std::endl;
        return false;
    } 
}

float rectangle::getPerimeter() const{
    return getWidth()*2 + getHeight()*2;
}

float rectangle::getArea() const{
    return getHeight()*getWidth();
}

float rectangle::getHeight() const{
    return m_height;
}

float rectangle::getWidth() const{
    return m_width;
}

void rectangle::printInfo() const{
    std::cout << "The rectangle has the following informations :" << std::endl;
    std::cout << "Height : " << getHeight() << std::endl;
    std::cout << "Width : " << getWidth() << std::endl;
    std::cout << "Perimeter : " << getPerimeter() << std::endl;
    std::cout << "Area : " << getArea() << std::endl;
}
