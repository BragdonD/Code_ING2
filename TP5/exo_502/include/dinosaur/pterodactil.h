#ifndef __PTERODACTIL_H__
#define __PTERODACTIL_H__

#include "coordinates.h"
#include "dinosaur.h"
#include "mooves/fly.h"

class pterodactil : public dinosaur
{
    private:
        fly m_movementsInAir;
    protected:
        virtual void display(std::ostream& os);
    public:
        pterodactil();
        pterodactil(int _damages, int _speed, int _defense, int _x);
        ~pterodactil();
        fly getMovementsInAir();
};

#endif