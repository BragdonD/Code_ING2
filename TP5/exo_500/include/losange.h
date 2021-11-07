#ifndef LOSANGE_H
#define LOSANGE_H


#include <iostream>
#include "forme.h"

class losange : public forme
{
    public:
        losange();
        losange(int _height, int _width, int _nbSide);

        ~losange();

        void setShape(sf::CircleShape& shape);

        void CalculArea();
        void CalculPerimeter();
        void CalculSideWidth();

        friend std::ostream& operator<<(std::ostream& os, losange& losange);
        
};

#endif