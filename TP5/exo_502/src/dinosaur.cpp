#include <iostream>
#include "dinosaur.h"

dinosaur::dinosaur(){}

dinosaur::dinosaur(int _damages, int _speed, int _defense, const coordinates& _coord):
m_damages(_damages), m_defense(_defense), m_speed(_speed), m_coordinates(_coord){}


void dinosaur::setDamage(int _dmg){m_damages=_dmg;}
void dinosaur::setDefense(int _def){m_defense=_def;}
void dinosaur::setSpeed(int _speed){m_speed=_speed;}
void dinosaur::SetLP(int _LP){m_lp=_LP;}
void dinosaur::setState(bool _state){m_alive=_state;}

int dinosaur::getSpeed() const {return m_speed;}
int dinosaur::getDefense() const {return m_defense;}
int dinosaur::getDamage() const {return m_damages;}
bool dinosaur::getState() const{return m_alive;}
int dinosaur::getLP() const{return m_lp;}
coordinates dinosaur::getCoordinate() const{return m_coordinates;}

bool isInWater(int X, int Y){
    if(X<10 && Y<0){return true;}
    else return false;
}

bool isInAir(int X, int Y){
    if(Y>0){return true;}
    else return false;
}

bool isOnGround(int X, int Y){
    if(X>10 && Y==0){return true;}
    else return false;
}

std::ostream& operator<<(std::ostream& os, const dinosaur& _dino){
    _dino.display(os);
    if(isInAir(_dino.getCoordinate().getX(), _dino.getCoordinate().getY())){
        os << "Position : Air";
    }
    else if(isInWater(_dino.getCoordinate().getX(), _dino.getCoordinate().getY())){
        os << "Position : Water";
    }
    else{
        os << "Position : Ground";
    }
    if(_dino.getState()){
        os << "State : Alive" << std::endl;
    }
    else{
        os << "State : Dead" << std::endl;
    }
    os << "Stats : " << std::endl;
    os << "LP : " << _dino.getLP() << std::endl;
    os << "Speed : " << _dino.getSpeed() << std::endl;
    os << "Defense : " << _dino.getDefense() << std::endl;
    os << "Attack : " << _dino.getDamage() << std::endl;
    os << _dino.getCoordinate();

    return os;
}