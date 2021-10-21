#include <iostream>
#include "car.h"

car::car():vehicule("",130.0,4,0,"",""){}

car::car(const std::string& _id, int _person, const std::string& _color, const std::string& _brand):
vehicule(_id,130.0,4,_person,_color,_brand){}

car::~car(){}

std::ostream& operator<<(std::ostream& os, const car& _vehicule)
{
    os << std::endl;
    os << "Car" << std::endl;
    os << "Id : " << _vehicule.getId() << std::endl;
    os << "max Speed : " << _vehicule.getMaxSpeed() << std::endl;
    os << "speed : " << _vehicule.getSpeed() << std::endl;
    os << "max Person : " << _vehicule.getMaxPerson() << std::endl;
    os << "nb person : " << _vehicule.getPerson() << std::endl;
    os << "color : " << _vehicule.getColor() << std::endl;
    os << "brand : " << _vehicule.getbrand() << std::endl;
    return os;
}

void addPersonToCar(car& _car){
    if(_car.addPerson()){
        std::cout << "La personne est montee dans la voiture correctement." << std::endl;
    }
    else{
        std::cout << "La personne n'a pas pu montee dans la voiture car elle est plein." << std::endl;
    }
}

void addMultiplePersonToCar(car& _car, int _nb){
    for(int i=0; i<_nb; i++){
        if(_car.addPerson()){
            std::cout << "La personne est montee dans la voiture correctement." << std::endl;
        }
        else{
            std::cout << "La personne n'a pas pu montee dans la voiture car elle est plein." << std::endl;
        }
    } 
}