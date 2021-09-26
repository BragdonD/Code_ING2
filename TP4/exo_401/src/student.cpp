#include <iostream>
#include "student.h"

student::student(std::string n_name, std::string n_id, int n_yearPromo): m_name(n_name), m_id(n_id), m_yearPromo(n_yearPromo)
{}

student::student(){}

student::~student(){}

void student::setName(std::string n_name){
    //eventuellement rajouter un blindage pour enelever tous les caracteres non letriques
    m_name = n_name;
}

void student::setId(std::string n_id){
    //eventuellement mettre en place un type d'id qui doit respecter des conditions
    m_id = n_id;
}

void student::setPromo(int n_yearPromo){
    m_yearPromo = n_yearPromo;
}

std::string student::getName() const{
    return m_name;
}

std::string student::getId() const{
    return m_id;
}

int student::getYearPromo() const{
    return m_yearPromo;
}

void student::printInfo() const{
    std::cout << "Name : " << getName() << std::endl;
    std::cout << "Id: " << getId() << std::endl;
    std::cout << "Promo : " << getYearPromo() << std::endl;
}