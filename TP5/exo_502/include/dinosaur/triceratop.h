#ifndef TRICERATOP_H
#define TRICERATOP_H

#include "coordinates.h"
#include "dinosaur.h"
#include "mooves/walk.h"

class triceratop : public dinosaur
{
    private:
        walk *m_movements; 
        void display(std::ostream& os);        
    public:
        triceratop();
        triceratop(int _damages, int _speed, int _defense);
        ~triceratop();
        walk* getMovements();
        
};

#endif