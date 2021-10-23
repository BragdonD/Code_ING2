#ifndef __TRICERATOP_H__
#define __TRICERATOP_H__

#include "coordinates.h"
#include "dinosaur.h"
#include "mooves/walk.h"

class triceratop : public dinosaur
{
    private:
        walk m_movements;
    protected:
        virtual void display(std::ostream& os);
    public:
        triceratop();
        triceratop(int _damages, int _speed, int _defense, int _x);
        ~triceratop();
        walk getMovements();
};

#endif