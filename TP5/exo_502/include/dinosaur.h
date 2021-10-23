#ifndef __DINOSAUR_H__
#define __DINOSAUR_H__

#include "coordinates.h"

class dinosaur
{
    private:
        virtual void display(std::ostream& os) const = 0;
    protected:
        int m_damages;
        int m_lp = 100;
        bool m_alive = true;
        int m_speed;
        int m_defense;
        coordinates m_coordinates;
    public:
        dinosaur();
        dinosaur(int _damages, int _speed, int _defense, const coordinates& _coord);
        virtual ~dinosaur();
        void setDamage(int _dmg);
        void setDefense(int _def);
        void setSpeed(int _speed);
        void SetLP(int _LP);
        void setState(bool _state);
        int getSpeed() const;
        int getDefense() const;
        int getDamage() const;
        bool getState() const;
        int getLP() const;
        coordinates getCoordinate() const;
        friend std::ostream& operator<<(std::ostream& os, const dinosaur& _dino);
};

#endif
