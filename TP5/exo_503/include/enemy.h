#ifndef ENEMY_H
#define ENEMY_H

#include "character.h"

class enemy : public character
{
    private:
        /* data */
    public:
        enemy();
        enemy(const std::string& _name);
        bool attaquer(character* _charaToAttack);
        void display(std::ostream& os) const;
        ~enemy();
};

#endif