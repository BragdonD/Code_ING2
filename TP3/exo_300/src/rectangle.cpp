#include <iostream>
#include "rectangle.h"

rectangle::rectangle(float n_width, float n_height):
m_width(n_width), m_height(n_height)
{}

rectangle::rectangle(): m_width(0.0), m_height(0.0)
{}

void rectangle::changeWidth(int n_width){
    m_width = n_width;
}

void rectangle::changeHeight(int n_height){
    m_height = n_height;
}

rectangle::~rectangle(){}

int rectangle::calculPerimeter(){
    return m_width*2 + m_height*2;
}

int rectangle::calculArea(){
    return m_height*m_width;
}

void rectangle::printInfo(){
    std::cout << "The rectangle has the following informations :" << std::endl;
    std::cout << "Height : " << m_height << std::endl;
    std::cout << "Width : " << m_width << std::endl;
    std::cout << "Perimeter : " << calculPerimeter() << std::endl;
    std::cout << "Area : " << calculArea() << std::endl;
}
