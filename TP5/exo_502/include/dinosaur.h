#ifndef DINOSAUR_H
#define DINOSAUR_H

#include "coordinates.h"
#include "mooves/walk.h"
#include "mooves/swim.h"
#include "mooves/fly.h"
#include <string>

class dinosaur
{       
    protected:
        walk *m_movementsOnGround;
        fly *m_movementsInAir;
        swim *m_movementInWater;
        int m_damages;
        int m_lp = 100;
        bool m_alive = true;
        int m_speed;
        int m_defense;
        coordinates m_coordinates;
        virtual void display(std::ostream& os){}
        
    public:
        dinosaur();
        dinosaur(int _damages, int _speed, int _defense, const coordinates& _coord);
        virtual ~dinosaur();
        void setDamage(int _dmg);
        void setDefense(int _def);
        void setSpeed(int _speed);
        void SetLP(int _LP);
        void setState(bool _state);
        void setCoordinate(const coordinates& _coord);
        int getSpeed() const;
        int getDefense() const;
        int getDamage() const;
        bool getState() const;
        int getLP() const;
        coordinates getCoordinate() const;
        friend std::ostream& operator<<(std::ostream& os, dinosaur& _dino);
        virtual walk* getMovementsOnGround();
        virtual swim* getMovementsInWater();
        virtual fly* getMovementsInAir();
};

#endif
