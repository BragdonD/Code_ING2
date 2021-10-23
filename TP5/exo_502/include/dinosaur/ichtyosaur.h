#ifndef __ICHTYOSAUR_H__
#define __ICHTYOSAUR_H__

#include "coordinates.h"
#include "dinosaur.h"
#include "mooves/swim.h"

class ichtyosaur : public dinosaur
{
    private:
        swim m_movements;
    protected:
        virtual void display(std::ostream& os);
    public:
        ichtyosaur();
        ichtyosaur(int _damages, int _speed, int _defense, int _x);
        ~ichtyosaur();
        swim getMovements();
};

#endif