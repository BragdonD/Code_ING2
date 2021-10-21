#include <iostream>
#include "truck.h"

truck::truck():vehicule("",90.0,2,0,"",""), m_cargo(NULL){}

truck::truck(const std::string& _id, int _person, const std::string& _color, const std::string& _brand):
vehicule(_id,90.0,2,_person,_color,_brand), m_cargo(NULL){}

truck::~truck(){}

void truck::setCargaison(cargo* _cargo)
{
    m_cargo = _cargo;
    if(_cargo == NULL){
        setMaxSpeed(90.0);
    }
    else{
        setMaxSpeed(70.0);
        if(getSpeed()>getMaxSpeed()){
            setSpeedVehicule(getMaxSpeed());
        }
    }
}

cargo* truck::getCargaison() const {return m_cargo;}

std::ostream& operator<<(std::ostream& os, const truck& _vehicule)
{
    os << std::endl;
    os << "Truck" << std::endl;
    os << "Id : " << _vehicule.getId() << std::endl;
    os << "max Speed : " << _vehicule.getMaxSpeed() << std::endl;
    os << "speed : " << _vehicule.getSpeed() << std::endl;
    os << "max Person : " << _vehicule.getMaxPerson() << std::endl;
    os << "nb person : " << _vehicule.getPerson() << std::endl;
    os << "color : " << _vehicule.getColor() << std::endl;
    os << "brand : " << _vehicule.getbrand() << std::endl;
    if(_vehicule.getCargaison() == NULL)
        os << "Cargaison : " << "vide" << std::endl;
    else
        os << "Cargaison : " << _vehicule.getCargaison()->getCargo() << std::endl;
    return os;
}

void addPersonToTruck(truck& _truck){
    if(_truck.addPerson()){
        std::cout << "La personne est montee dans le camion correctement." << std::endl;
    }
    else{
        std::cout << "La personne n'a pas pu montee dans le camion car il est plein." << std::endl;
    }
}

void addMultiplePersonToTruck(truck& _truck, int _nb){
    for(int i=0; i<_nb; i++){
        if(_truck.addPerson()){
            std::cout << "La personne est montee dans le camion correctement." << std::endl;
        }
        else{
            std::cout << "La personne n'a pas pu montee dans le camion car il est plein." << std::endl;
        }
    } 
}