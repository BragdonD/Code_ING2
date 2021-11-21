#include <iostream>
#include <fstream>
#include "myexception.h"

myexception::myexception(std::exception& e,std::string path){
    std::ofstream file(path.c_str(),std::ios::out);
    if(file.is_open()){
        file << e.what();
    }
}

myexception::~myexception(){}