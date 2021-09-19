#include <iostream>
#include "line.h"

line::line(/* args */)
{}

line::~line()
{}

bool line::setPoint1(float n_x1, float n_y1){
    if(n_x1!=getPoint2().getX() || n_y1!=getPoint2().getY()){
        m_point1.setX(n_x1);
        m_point1.setY(n_y1);
        return true;
    }
    else{
        return false;
    } 
}

bool line::setPoint2(float n_x2, float n_y2){
    if(n_x2!=getPoint1().getX() || n_y2!=getPoint1().getY()){
        m_point2.setX(n_x2);
        m_point2.setY(n_y2);
        return true;
    }
    else{
        return false;
    } 
}

point line::getPoint1() const{
    return m_point1;
}

point line::getPoint2() const{
    return m_point2;
}

point line::getRandomPoint() const{
    point randomPoint;
    std::random_device xrnd;
    std::default_random_engine el(xrnd());
    std::uniform_real_distribution<float>uniform_dist(-100, 100);
    float x = uniform_dist(el);
    float a, b;

    a = (getPoint1().getY() - getPoint2().getY())/(getPoint1().getX() - getPoint2().getX());
    b = getPoint1().getY() - a*getPoint1().getX();

    randomPoint.setX(x);
    randomPoint.setY(a*x + b);

    return randomPoint;
}

void line::printEqtCart() const{
    float a((getPoint1().getY() - getPoint2().getY())/(getPoint1().getX() - getPoint2().getX()));
    float b(getPoint1().getY() - a*getPoint1().getX());
    std::cout << "y = " << a << "x + " << b << std::endl;
}

void line::printPoints1And2() const{
    std::cout << "Point 1 : " << std::endl;
    std::cout << "A(" << getPoint1().getX() << ";" << getPoint1().getY() << ")" << std::endl;
    std::cout << "Point 2 : " << std::endl;
    std::cout << "B(" << getPoint2().getX() << ";" << getPoint2().getY() << ")" << std::endl;
}

void line::printPoints(int nb) const{
    for(int i=0; i<nb; i++){
        point aPoint  = getRandomPoint();
        std::cout << "Point" << i << " : " << std::endl;
        std::cout << "A(" << aPoint.getX() << ";" << aPoint.getY() << ")" << std::endl;
    }
}
