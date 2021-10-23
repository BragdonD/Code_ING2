#ifndef __PLESIOSAUR_H__
#define __PLESIOSAUR_H__

#include "coordinates.h"
#include "dinosaur.h"
#include "mooves/swim.h"
#include "mooves/walk.h"

class plesiosaur : public dinosaur
{
    private:
        swim m_movementsInWater;
        walk m_movementsOnGround;
    protected:
        virtual void display(std::ostream& os);
    public:
        plesiosaur();
        plesiosaur(int _damages, int _speed, int _defense, int _x);
        ~plesiosaur();
        swim getMovementsInWater();
        walk getMovementsOnGround();
};

#endif