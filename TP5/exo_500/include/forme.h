#ifndef __FORME_H__
#define __FORME_H__
#pragma once

#include <SFML/Graphics.hpp>
#include <cmath>

class forme
{
    protected:
        float m_height;
        float m_width;
        sf::Color m_color;
        bool m_display = false;
        float m_perimeter;
        float m_area;
    public:
        forme() = default;
        forme(float _width, float _height);
        forme(float _width, float _height, sf::Color _color);
        ~forme();
        void setHeight(float _height);
        void setWidth(float _width);
        void setArea(float _area);
        void setPerimeter(float _perimeter);
        void setColor(sf::Color _color);
        void setDisplay(bool _display);
        float getWidth() const;
        float getheight() const;
        float getArea() const;
        float getPerimeter() const;
        sf::Color getColor() const;
        bool getDisplay() const;
};

forme::forme(){}
forme::forme(float _width, float _height): m_width(_width), m_height(_height){}
forme::forme(float _width, float _height, sf::Color _color): m_width(_width), m_height(_height), m_color(_color){}
forme::~forme(){}
void forme::setHeight(float _height){m_height = _height;}
void forme::setWidth(float _width){m_width = _width;}
void forme::setArea(float _area){m_area = _area;}
void forme::setPerimeter(float _perimeter){m_perimeter = _perimeter;}
void forme::setColor(sf::Color _color){m_color = _color;}
void forme::setDisplay(bool _display){m_display = _display;}
float forme::getWidth() const{return m_width;}
float forme::getheight() const{return m_height;}
float forme::getArea() const{return m_area;}
float forme::getPerimeter() const{return m_perimeter;}
sf::Color forme::getColor() const{return m_color;}
bool forme::getDisplay() const{return m_display;}

#endif