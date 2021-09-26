#include <iostream>
#include "school.h"

school::school(){}

school::~school(){
    for(const auto &p : m_pTabStudent){
        delete p;
    }
}

void school::AddStudent(student* n_student){
    m_pTabStudent.push_back(n_student);
}

std::vector<student*> school::getAllStudent() const{
    return m_pTabStudent;
}

void school::printStudent() const{
    for(const auto &p : getAllStudent()){
        p->printInfo();
        std::cout << std::endl;
    }
}