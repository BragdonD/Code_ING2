#include <iostream>
#include "wizard.h"

wizard::wizard():character(100,15,0,""){}
wizard::wizard(const std::string& _name): character(100,15,0,_name){}
wizard::~wizard(){}
bool wizard::attaquer(character* _charaToAttack){
    if(getState()==true){
        if(_charaToAttack->getLifePoints()>0){
            if(getManaPoints()-getCostAttack()>=0){
                _charaToAttack->setLifePoints(_charaToAttack->getLifePoints()-(getDamages()-_charaToAttack->getDefense()));
                std::cout << getName() << " attacks " << _charaToAttack->getName() << " and deal " << getDamages() << " damages " << " and spend " << getCostAttack() << "MP." << std::endl;
                return true;
            }
            else{
                std::cout <<   getName() << " doesn't have enough mana to cast this spell." << std::endl;
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

bool wizard::defendre(character* _charaToDefend){
    if(getState()==true){
        if(getManaPoints()-getCostAttack()>=0){
            _charaToDefend->setBeDefend(true);
            std::cout << getName() << " defends " << _charaToDefend->getName() << " and spend " << getCostDefense() << "MP." << std::endl;
            setManaPoints(getManaPoints()-getCostDefense());
            return true;
        }
        else{
            std::cout <<   getName() << " doesn't have enough mana to cast this spell." << std::endl;
            return false;
        }
    }
    else{
        return false;
    }
}
void wizard::display(std::ostream& os) const{}

void wizard::setManaPoints(int _MP){m_manaPoints = _MP;}
void wizard::setDefenseCost(int _cost){m_costDef = _cost;}
void wizard::setAttackCost(int _cost){m_costAttack = _cost;}
int wizard::getManaPoints() const{return m_manaPoints;}
int wizard::getCostAttack() const{return m_costAttack;}
int wizard::getCostDefense() const{return m_costDef;}