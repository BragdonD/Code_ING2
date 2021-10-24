#ifndef PLESIOSAUR_H
#define PLESIOSAUR_H

#include "coordinates.h"
#include "dinosaur.h"
#include "mooves/swim.h"
#include "mooves/walk.h"

class plesiosaur : public dinosaur
{
    private:
        void display(std::ostream& os); 
    public:
        plesiosaur();
        plesiosaur(int _damages, int _speed, int _defense);
        ~plesiosaur();
        swim* getMovementsInWater();
        walk* getMovementsOnGround();
};

#endif