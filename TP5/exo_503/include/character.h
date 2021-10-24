#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>

class character
{
    protected:
        std::string m_name;
        int m_lifePoints;
        int m_damages;
        int m_defense;
        bool m_beDefend = false;
        bool m_alive = true;
    public:
        character();
        character(int _lifePoints, int _damages, int _defense, const std::string& _name);
        virtual ~character();
        virtual bool attaquer(character* _charaToAttack);
        virtual bool defendre(character* _charaToDefendre){return false;}
        virtual void display(std::ostream& os) const;
        friend std::ostream& operator<<(std::ostream& os, const character& _chara);
        void setDamages(int _damages);
        void setLifePoints(int _lP);
        void setDefense(int _defense);
        void setBeDefend(bool _defend);
        void setName(const std::string& _name);
        void setState(bool _state);
        bool getState() const;
        std::string& getName();
        bool getBeDefend() const;
        int getDamages() const;
        int getDefense() const;
        int getLifePoints() const;
};

#endif