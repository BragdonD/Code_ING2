#include <iostream>
#include "cargo.h"

cargo::cargo(){}
cargo::cargo(const std::string& _cargo):m_cargo(_cargo){}
cargo::~cargo(){}
void cargo::setCargo(const std::string& _cargo){m_cargo = _cargo;}
std::string cargo::getCargo(){return m_cargo;}

std::ostream& operator<<(std::ostream& os, const cargo& _cargo){
    os << _cargo.m_cargo;
    return os;
}