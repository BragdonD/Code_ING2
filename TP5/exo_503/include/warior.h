#ifndef WARIOR_H
#define WARIOR_H

#include "character.h"

class warior : public character
{
    private:
        
    public:
        warior();
        warior(const std::string& _name);
        ~warior();
        bool attaquer(character* _charaToAttack);
        void display(std::ostream& os) const;
};

#endif