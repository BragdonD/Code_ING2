#ifndef PTERODACTIL_H
#define PTERODACTIL_H

#include "coordinates.h"
#include "dinosaur.h"
#include "mooves/fly.h"

class pterodactil : public dinosaur
{
    private:
        fly *m_movementsInAir;
        void display(std::ostream& os); 
    public:
        pterodactil();
        pterodactil(int _damages, int _speed, int _defense);
        ~pterodactil();
        fly* getMovementsInAir();
};

#endif