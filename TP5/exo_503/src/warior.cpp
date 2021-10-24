#include <iostream>
#include "warior.h"


warior::warior():character(100,15,0,""){}
warior::warior(const std::string& _name): character(100,15,0,_name){}
warior::~warior(){}

bool warior::attaquer(character* _charaToAttack){
    if(getState()==true){
        if(_charaToAttack->getLifePoints()>=0){
            _charaToAttack->setLifePoints(_charaToAttack->getLifePoints()-(getDamages()-_charaToAttack->getDefense()));
            std::cout << getName() << " attacks " << _charaToAttack->getName() << " and deal " << getDamages() << " damages." << std::endl;
            return true;
        }
        else{
            std::cout << "The target is already dead." << std::endl;
            return false;
        }
    }
    else{
        return false;
    }
}

void warior::display(std::ostream& os) const{
    os << "Class : Warior" << std::endl;
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
