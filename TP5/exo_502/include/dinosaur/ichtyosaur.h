#ifndef ICHTYOSAUR_H
#define ICHTYOSAUR_H

#include "coordinates.h"
#include "dinosaur.h"
#include "mooves/swim.h"

class ichtyosaur : public dinosaur
{
    private:
        swim *m_movements; 
        void display(std::ostream& os);    
    public:
        ichtyosaur();
        ichtyosaur(int _damages, int _speed, int _defense);
        ~ichtyosaur();
        swim* getMovements();
        
};

#endif