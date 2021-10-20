#include <iostream>
#include "vehicule.h"

vehicule::vehicule(){}
vehicule::vehicule(std::string _id, float _maxSpeed, int _maxPers, int _person, std::string _color, std::string _brand) : m_id(_id), m_maxSpeed(_maxSpeed), m_pers(_person), m_maxPers(_maxPers), m_color(_color), m_brand(_brand){}
vehicule::~vehicule(){}
void vehicule::setId(std::string _id){m_id = _id;}
void vehicule::setMaxSpeed(float _maxSpeed){m_maxSpeed = _maxSpeed;}

bool vehicule::setSpeedVehicule(float _speed){
    if(_speed<0 || _speed>getMaxSpeed()){
        return false;
    }
    else{
        m_speed = _speed;
        return true;
    }
}

void vehicule::setBrand(std::string _brand){m_brand = _brand;}
void vehicule::setColor(std::string _color){m_color = _color;}
void vehicule::setMaxPerson(int _maxPers){m_maxPers = _maxPers;}
void vehicule::setPerson(int _person){m_pers = _person;}

bool vehicule::addPerson(){
    if(m_pers == m_maxPers){
        return false;
    }
    else{
        m_pers += 1;
        return true;
    }
}

std::string vehicule::getColor() const{return m_color;}
std::string vehicule::getId() const{return m_id;}
std::string vehicule::getbrand() const{return m_brand;}
float vehicule::getSpeed() const{return m_speed;}
float vehicule:: getMaxSpeed() const{return m_maxSpeed;}
int vehicule::getMaxPerson() const{return m_maxPers;}
int vehicule::getPerson() const{return m_pers;}