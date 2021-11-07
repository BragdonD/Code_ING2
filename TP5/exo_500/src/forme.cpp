#include <iostream>
#include "losange.h"

forme::forme(){}
forme::forme(int _height, int _width, int _nbSide): m_height(_height), m_width(_width), m_nbSide(_nbSide){}
forme::~forme(){}
void forme::setHeight(float _height){m_height = _height;}
void forme::setWidth(float _width){m_width = _width;}
void forme::setArea(float _area){m_area = _area;}
void forme::setPerimeter(float _perimeter){m_perimeter = _perimeter;}
void forme::setDisplay(bool _display){m_display = _display;}
void forme::setAngles(std::vector<float>& _angles){m_angles = _angles;}
void forme::setSideWidth(std::vector<float>& _sideWidth){m_sideWidth = _sideWidth;}
void forme::setNbSide(int _nbside){m_nbSide = _nbside;}
int forme::getNbSide() const{return m_nbSide;}
std::vector<float> forme::getAngles() const{return m_angles;}
std::vector<float> forme::getSideWidth() const{return m_sideWidth;}
float forme::getWidth() const{return m_width;}
float forme::getheight() const{return m_height;}
float forme::getArea() const{return m_area;}
float forme::getPerimeter() const{return m_perimeter;}
bool forme::getDisplay() const{return m_display;}

void forme::displayOnWindow(sf::RenderWindow& window){
    window.draw(m_form);
}