#ifndef __CAR_H__
#define __CAR_H__

#include "vehicule.h"

class car : public vehicule
{
    private:
        
    public:
        car();
        car(const std::string& _id, int _person, const std::string& _color, const std::string& _brand);
        ~car();
        friend std::ostream& operator<<(std::ostream& os, const car& _vehicule);
};

void addPersonToCar(car& _car);
void addMultiplePersonToCar(car& _car, int _nb);

#endif