#ifndef __MOTO_H__
#define __MOTO_H__

#include "vehicule.h"

class moto : public vehicule
{
private:
    /* data */
public:
    moto(/* args */);
    moto(const std::string& _id, int _person, const std::string& _color, const std::string& _brand);
    ~moto();
    friend std::ostream& operator<<(std::ostream& os, const moto& _vehicule);
};

void addPersonToMoto(moto& _moto);
void addMultiplePersonToMoto(moto& _moto, int _nb);

#endif