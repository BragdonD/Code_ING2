#include <iostream>
#include "person.h"

person::person(/* args */)
{}

person::person(std::string n_fName, std::string n_LName, std::string n_sex, int n_dayBirth, int n_monthBirth, int n_yearBirth, person *n_person):
m_firstName(n_fName), m_lastName(n_LName), m_sex(n_sex), m_dayOfBirth(n_dayBirth), m_monthOfBirth(n_monthBirth), m_yearOfBirth(n_yearBirth), m_pPartner(n_person)
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

void person::setPartner(person *n_person){
    m_pPartner = n_person;
}

std::string person::getFirstName() const{
    return m_firstName;
}

std::string person::getLastName() const{
    return m_lastName;
}

std::string person::getSex() const{
    return m_sex;
}

person* person::getPartner() const{
    return m_pPartner;
}

int person::getYearOfBirth() const{
    return m_yearOfBirth;
}

int person::getMonthOfBirth() const{
    return m_monthOfBirth;
}

int person::getDayOfBirth() const{
    return m_dayOfBirth;
}

void person::Divorce(){
    if(this->getPartner()==NULL){
        std::cout << "A person can't divorced if she is single !!" << std::endl;
    }
    else{
        m_pPartner->setPartner(NULL);
        setPartner(NULL);
    }
}

void person::Marry(person* n_person){
    if(this->getFirstName()==n_person->getFirstName() && this->getLastName()==n_person->getLastName()){
        std::cout << "A person can't be married to herself !!" << std::endl;
    }
    else{
        n_person->setPartner(this);
        m_pPartner = n_person;
    }
}


void person::Printinfo()const{
    if(getSex() == "Male"){
        std::cout<< "M.";
    }
    else{
        std::cout<< "Mme.";
    }
    std::cout<< getLastName() << ' ' << getFirstName() << " est ne";
    if(getSex() != "Male"){
        std::cout<< "e ";
    }
    std::cout << " en " << getYearOfBirth() << " et est ";
    if(getPartner()!=NULL){
        std::cout << "marie a " << getPartner()->getFirstName() << ' ' << getPartner()->getLastName(); 
    }
    else{
        std::cout<< "celibataire";
    }
    std::cout<<std::endl;
}
