#include <iostream>
#include "fonctions.h"

float squareFunction(float a){
    return a*a;
}

float circlePerimeter(float r){
    return 2*M_PI*r;
}

float circleArea(float r){
    return 2*M_PI*squareFunction(r);
}

float squareDiagonal(float c){
    return sqrt(2*(squareFunction(c)));
}