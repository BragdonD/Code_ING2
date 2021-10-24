#include <iostream>
#include "enemy.h"

enemy::enemy():character(100,13,0,""){}
enemy::enemy(const std::string& _name): character(100,13,0,_name){}
enemy::~enemy(){}

bool enemy::attaquer(character* _charaToAttack){
    if(getState()==true)
    {
        if(_charaToAttack->getLifePoints()>0){
            if(_charaToAttack->getBeDefend()==false){
                _charaToAttack->setLifePoints(_charaToAttack->getLifePoints()-(getDamages()-_charaToAttack->getDefense()));
                std::cout << getName() << " attacks " << _charaToAttack->getName() << " and deal " << getDamages() << " damages." << std::endl;
            }
            else{
                std::cout << _charaToAttack->getName() << " is defend by a spell. Impossible to attack." << std::endl;
            }
            return true;
        }
        else{
            std::cout << _charaToAttack->getName() << " is already dead." << std::endl;
            return false;
        }
    }
    else{
        return false;
    }
}

void enemy::display(std::ostream& os) const{
    os << "Class : Enemy" << std::endl;
    os << "Type : Melee" << std::endl;
    os << "Weapon : Sword" << std::endl;
    if(getLifePoints()>0){
        os << "State : Alive" << std::endl;
    }
    else{
        os << "State : Dead" << std::endl;
    }
    os << "Stats : " << std::endl;
    os << "\tLP : " << getLifePoints()  << std::endl;
    os << "\tDamage : " << getDamages()  << std::endl;
    os << "\tDefense : " << getDefense()  << std::endl;
}