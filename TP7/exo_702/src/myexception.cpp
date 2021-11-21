#include <iostream>
#include "myexception.h"

PointException::PointException(){}

PointException::~PointException() throw(){
    
}

const char* PointException::what() throw(){
    return "the coordinates are out of bond";
}