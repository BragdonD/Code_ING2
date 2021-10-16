#ifndef __APPLE_H__
#define __APPLE_H__
#pragma once

#include "coordinates.h"

class apple
{
    private:
        int m_point;
        char m_cara = 'P';
        coordinates m_coord;
    public:
        apple(/* args */);
        ~apple();
        void setPosition(coordinates& _coord);
        void setPosition(int _x, int _y);
        void setCara(int _cara);
        int getX() const;
        int gety() const;
        coordinates getCoord() const;
        char getCara() const;        
};

#endif