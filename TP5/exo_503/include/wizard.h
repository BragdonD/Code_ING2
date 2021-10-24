#ifndef WIZARD_H
#define WIZARD_H

#include "character.h"

class wizard : public character
{
    private:
        int m_manaPoints = 50;
        int m_costDef = 5;
        int m_costAttack = 10;
    public:
        wizard();
        wizard(const std::string& _name);
        ~wizard();
        bool attaquer(character* _charaToAttack);
        bool defendre(character* _charaToDefend);
        void display(std::ostream& os) const;
        void setManaPoints(int _MP);
        void setDefenseCost(int _cost);
        void setAttackCost(int _cost);
        int getManaPoints() const;
        int getCostAttack() const;
        int getCostDefense() const;
};

#endif