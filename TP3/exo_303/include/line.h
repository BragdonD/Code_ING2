#ifndef __LINE_H__
#define __LINE_H__
#pragma once

#include "point.h"
#include <random>

class line
{
    private:
        point m_point1;
        point m_point2; 
    public:
        line(/* args */);
        ~line();
        bool setPoint1(float n_x1, float n_y1);
        bool setPoint2(float n_x2, float n_y2);
        point getPoint1() const;
        point getPoint2() const;
        point getRandomPoint() const;
        void printEqtCart() const;
        void printPoints1And2() const;
        void printPoints(int nb) const;
};



#endif