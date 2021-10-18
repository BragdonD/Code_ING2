#ifndef __VEHICULE_H__
#define __VEHICULE_H__

#include <string>

class vehicule
{
    protected:
        std::string m_id;
        float m_maxSpeed = 130.0;
        std::string m_color;
        std::string m_brand;
    public:
        vehicule(/* args */);
        ~vehicule();
};

vehicule::vehicule(/* args */)
{
}

vehicule::~vehicule()
{
}


#endif