#ifndef __VEHICULE_H__
#define __VEHICULE_H__

#include <string>

class vehicule
{
    protected:
        std::string m_id;
        float m_maxSpeed;
        int m_maxPers;
        int m_pers;
        float m_speed;
        std::string m_color;
        std::string m_brand;
         
    public:
        vehicule();
        vehicule(const std::string& _id, float _maxSpeed, int _maxPers, int _person, const std::string& _color, const std::string& _brand);
        ~vehicule();
        void setId(std::string _id);
        void setMaxSpeed(float _maxSpeed);
        bool setSpeedVehicule(float _speed);
        void setBrand(std::string _brand);
        void setColor(std::string _color);
        void setMaxPerson(int _maxPers);
        void setPerson(int _person);
        bool addPerson();
        std::string getColor() const;
        std::string getId() const;
        std::string getbrand() const;
        float getSpeed() const;
        float getMaxSpeed() const;
        int getMaxPerson() const;
        int getPerson() const;
        friend std::ostream& operator<<(std::ostream& os, const vehicule& _vehicule);
};

#endif