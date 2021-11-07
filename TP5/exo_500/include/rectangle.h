#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__
#pragma once

#include "forme.h"

class rectangle : public forme
{
    public:
        rectangle();
        ~rectangle();
        void CalculArea();
        void CalculPerimeter();
        void setAngles();
};

#endif