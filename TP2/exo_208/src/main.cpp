#include <iostream>
#include "entete.h"
#include "fonctions.h"

int main(){
    //declaration de la variable de traitement
    float X;
    ///saisie d'un reel
    X = enterReal();
    ///Appel de tous les sous programmes mathématiques présentes dans le fichier "fonctions.h"
    std::cout << "Square of " << X << "is : " << squareFunction(X) << std::endl;
    std::cout << "A circle of center O and radius r = " << X << std::endl;
    std::cout << "Its perimeter is equal to : " << circlePerimeter(X) << std::endl;
    std::cout << "Its area is equal to : " << circleArea(X) << std:: endl;
    std::cout << "A square of side c = " << X << std::endl;
    std::cout << "Its diagonal is equal to : " << squareDiagonal(X);

    return 0;
}
