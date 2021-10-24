#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>

class character
{
    protected:
        int m_lifePoints = 100;
        int m_damages;
        int m_defense;
    public:
        character();
        virtual ~character();
        virtual bool attaquer(character* _charaToAttack);
        virtual std::ostream& display(std::ostream& os);
        void setDegats(int _damages);
        void setLifePoints(int _lP);
        void setDefense(int _defense);
        int getDegats();
};

character::character(/* args */)
{
}

character::~character()
{
}


#endif