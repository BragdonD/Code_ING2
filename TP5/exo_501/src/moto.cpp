#include <iostream>
#include "moto.h"

moto::moto():vehicule("",130.0,2,0,"",""){}

moto::moto(const std::string& _id, int _person, const std::string& _color, const std::string& _brand):
vehicule(_id,130.0,2,_person,_color,_brand){}

moto::~moto(){}

std::ostream& operator<<(std::ostream& os, const moto& _vehicule)
{
    os << std::endl;
    os << "Moto" << std::endl;
    os << "Id : " << _vehicule.getId() << std::endl;
    os << "max Speed : " << _vehicule.getMaxSpeed() << std::endl;
    os << "speed : " << _vehicule.getSpeed() << std::endl;
    os << "max Person : " << _vehicule.getMaxPerson() << std::endl;
    os << "nb person : " << _vehicule.getPerson() << std::endl;
    os << "color : " << _vehicule.getColor() << std::endl;
    os << "brand : " << _vehicule.getbrand() << std::endl;
    return os;
}

void addPersonToMoto(moto& _moto){
    if(_moto.addPerson()){
        std::cout << "La personne est montee sur la moto correctement." << std::endl;
    }
    else{
        std::cout << "La personne n'a pas pu montee sur la moto car elle est pleine." << std::endl;
    }
}

void addMultiplePersonToMoto(moto& _moto, int _nb){
    for(int i=0; i<_nb; i++){
        if(_moto.addPerson()){
            std::cout << "La personne est montee sur la moto correctement." << std::endl;
        }
        else{
            std::cout << "La personne n'a pas pu montee sur la moto car elle est pleine." << std::endl;
        }
    } 
}