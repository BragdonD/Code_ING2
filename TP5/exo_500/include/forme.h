#ifndef __FORME_H__
#define __FORME_H__
#pragma once

#include <SFML/Graphics.hpp>


class forme
{
    protected:
        float m_height;
        float m_width;
        sf::Color m_color;
    public:
        forme();
        ~forme();
        void setHeight(float _height);
        void setWidth(float _width);
        float getWidth() const;
        float getheight() const;
};

forme::forme(){}
forme::~forme(){}
void forme::setHeight(float _height){m_height = _height;}
void forme::setWidth(float _width){m_width = _width;}
float forme::getWidth() const{return m_width;}
float forme::getheight() const{return m_height;}

#endif