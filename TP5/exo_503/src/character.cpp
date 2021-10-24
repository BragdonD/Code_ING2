#include <iostream>
#include "character.h"


character::character(){}

character::character(int _lifePoints, int _damages, int _defense, const std::string& _name) : m_lifePoints(_lifePoints), m_damages(_damages), m_defense(_defense), m_name(_name){}

character::~character(){}

bool character::attaquer(character* _charaToAttack){
    return false;
}

std::ostream& operator<<(std::ostream& os, const character& _chara){
    _chara.display(os);
    return os;
}

void character::display(std::ostream& os) const {}

void character::setDamages(int _damages){m_damages = _damages;}
void character::setLifePoints(int _lP){
    if(_lP>0){
        m_lifePoints = _lP;
    }
    else{
        m_alive = false;
        m_lifePoints = 0;
    }
}
void character::setDefense(int _defense){m_defense = _defense;}
void character::setBeDefend(bool _defend){m_beDefend = _defend;}
void character::setName(const std::string& _name){m_name = _name;}
void character::setState(bool _state){m_alive = _state;}
bool character::getState() const{return m_alive;}
std::string& character::getName(){return m_name;}
bool character::getBeDefend() const{return m_beDefend;}
int character::getDamages() const{return m_damages;}
int character::getDefense() const{return m_defense;}
int character::getLifePoints() const{return m_lifePoints;}