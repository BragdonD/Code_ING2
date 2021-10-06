#include <iostream>
#include "personage.h"

personage::personage(){}

personage::personage(std::string n_name): m_name(n_name)
{}

personage::~personage(){}

void personage::SetName(std::string n_name){
    m_name = n_name;
}

std::string personage::getName() const{
    return m_name;
}