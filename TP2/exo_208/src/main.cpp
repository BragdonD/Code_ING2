#include <iostream>
#include "entete.h"
#include "fonctions.h"

int main(){
    float X;

    X = enterReal();

    std::cout << "Square of " << X << "is : " << squareFunction(X) << std::endl;
    std::cout << "A circle of center O and radius r = " << X << std::endl;
    std::cout << "Its perimeter is equal to : " << circlePerimeter(X) << std::endl;
    std::cout << "Its area is equal to : " << circleArea(X) << std:: endl;
    std::cout << "A square of side c = " << X << std::endl;
    std::cout << "Its diagonal is equal to : " << squareDiagonal(X);

    return 0;
}
