#ifndef ELF_H
#define ELF_H

#include "character.h"

class elf : public character
{
    private:
        int m_munitions = 20;
        int m_costAttack = 1;
    public:
        elf();
        ~elf();
        elf(const std::string& _name);
        bool attaquer(character* _charaToAttack);
        void display(std::ostream& os) const;
        void setMunitions(int _nbMunition);
        void setCostAttack(int _cost);
        int getMunitions() const;
        int getCostAttack() const;
};

#endif