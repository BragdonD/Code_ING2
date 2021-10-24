#include <iostream>
#include "elf.h"

elf::elf():character(100,10,0,""){}
elf::elf(const std::string& _name): character(100,10,0,_name){}
elf::~elf(){}

void elf::setMunitions(int _nbMunition){
    if(_nbMunition>=0){
        m_munitions= _nbMunition;
    }
}

void elf::setCostAttack(int _cost){
    if(_cost>0){
        m_costAttack = _cost;
    }
}
int elf::getMunitions() const{return m_munitions;}
int elf::getCostAttack() const{return m_costAttack;}


bool elf::attaquer(character* _charaToAttack){
    if(getState() == true){
        if(_charaToAttack->getLifePoints()>0){
            if(getMunitions()>0){
                _charaToAttack->setLifePoints(_charaToAttack->getLifePoints()-(getDamages()-_charaToAttack->getDefense()));
                setMunitions(getMunitions()-1);
                std::cout << getName() << " attacks " << _charaToAttack->getName() << " and deal " << getDamages() << " damages " << " and spend " << getCostAttack() << "arrow." << std::endl;
                return true;
            }
            else{
                std::cout <<   getName() << " doesn't have any munition left." << std::endl;
                return false;
            }
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

void elf::display(std::ostream& os) const{
    os << "Class : Elf" << std::endl;
    os << "Type : Range" << std::endl;
    os << "Weapon : Bow" << std::endl;
    os << "Munition : " << getMunitions() << std::endl;
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
