#ifndef MOOVE_H
#define MOOVE_H

#include <iostream>
#include "coordinates.h"

class moove
{
    private:
        int m_plafond = 10;
        int m_minToMoove = 1; 
    public:
        moove();
        moove(int _plafond,int _minToMoove);
        ~moove();
        void GoForward(int _speed, coordinates& _coord, int _max);
        void GoBackward(int _speed, coordinates& _coord, int _min);
        void GoUpward(int _speed, coordinates& _coord);
        void GoDownward(int _speed, coordinates& _coord);
        int getPlafond() const ;
        int GetMinToMoove() const ;
};

#endif