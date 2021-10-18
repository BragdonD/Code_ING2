#ifndef __VEHICULE_H__
#define __VEHICULE_H__

#include <string>

class vehicule
{
    protected:
        std::string m_id;
        float m_maxSpeed = 130.0;
        float m_speed;
        std::string m_color;
        std::string m_brand;
    public:
        vehicule();
        vehicule(std::string _id, std::string _color, std::string _brand);
        vehicule(std::string _id, float _maxSpeed, std::string _color, std::string _brand);
        ~vehicule();
        void setId(std::string _id);
        void setMaxSpeed(float _maxSpeed);
        void setSpeedVehicule(float _speed);
        void setBrand(std::string _brand);
        void setColor(std::string _color);
        std::string getColor() const;
        std::string getId() const;
        std::string getbrand() const;
        float getSpeed() const;
        float getMaxSpeed() const;
};

vehicule::vehicule(/* args */)
{
}

vehicule::~vehicule()
{
}


#endif