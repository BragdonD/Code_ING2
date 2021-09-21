#include <iostream>
#include "person.h"

person::person(/* args */)
{}

person::~person()
{}

void person::setFirstName(std::string n_firstName){
    m_firstName = n_firstName;
}

void person::setLastName(std::string n_lastName){
    m_lastName = n_lastName;
}

bool person::setSex(std::string n_sex){
    if(n_sex == "Male" or n_sex == "Female"){
        m_sex = n_sex;
        return true;
    }
    else
        return false;
}

void person::setBirthday(int n_day, int n_month, int n_year){
    if(n_day>=0 && n_day<=31){
        m_dayOfBirth = n_day;
    }
    if(n_month>=0 && n_month<=12){
        m_monthOfBirth = n_month;
    }
    m_yearOfBirth = n_year; ///a developper pour blinder plus la date de naissance mais inutile de faire trop compliqué ici
}

void person::setPartner(person n_person){
    

}

std::string person::getFirstName() const{

}

std::string person::getLastName() const{

}

std::string person::getSex() const{

}

person* person::getPartner() const{

}

int person::getYearOfBirth() const{

}

int person::getMonthOfBirth() const{

}

int person::getDayOfBirth() const{

}

void person::Divorce(){

}

void person::Marry(){

}

