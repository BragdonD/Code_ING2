#ifndef VELOCIRAPTOR_H
#define VELOCIRAPTOR_H

#include "coordinates.h"
#include "dinosaur.h"
#include "mooves/walk.h"
#include "mooves/fly.h"

class velociraptor : public dinosaur
{
    private:
        void display(std::ostream& os); 
    public:
        velociraptor();
        velociraptor(int _damages, int _speed, int _defense);
        ~velociraptor();
        walk* getMovementsOnGround();
        fly* getMovementsInAir();
};

#endif