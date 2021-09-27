#include <iostream>
#include "file.h"

file::file(/* args */){}
file::file(std::string n_name, std::string n_id): m_name(n_name), m_id(n_id)
{}
file::~file(){}

std::string file::getName() const{
    return m_name;
}

std::string file::getId() const{
    return m_id;
}

void file::setName(std::string n_name){
    m_name = n_name;
}

void file::setId(std::string n_id){
    m_id = n_id;
}

void file::printFile() const{
    std::cout << "Name : " << getName() << std::endl;
    std::cout << "ID : " << getId() << std::endl;
}