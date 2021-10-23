#ifndef __VELOCIRAPTOR_H__
#define __VELOCIRAPTOR_H__

#include "coordinates.h"
#include "dinosaur.h"
#include "mooves/walk.h"
#include "mooves/fly.h"

class velociraptor : public dinosaur
{
    private:
        walk m_movements;
    protected:
        virtual void display(std::ostream& os);
    public:
        velociraptor();
        velociraptor(int _damages, int _speed, int _defense, int _x);
        ~velociraptor();
        walk getMovements();
};

#endif