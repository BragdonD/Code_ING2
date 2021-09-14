#include <iostream>
#include <iomanip> 
#include "entete.h"
#include "fonctions.h"

int main(){
    //declaration de la variable de traitement
    float X;
    ///saisie d'un reel
    X = enterReal();
    ///Appel de tous les sous programmes mathématiques présentes dans le fichier "fonctions.h"
    ///setprecision et fixed permettent d'avoir une précision de deux après la virgule
    std::cout << "Square of " << std::fixed << std::setprecision(2) <<  X << "is : " << squareFunction(X) << std::endl;
    std::cout << "A circle of center O and radius r = " << std::fixed << std::setprecision(2) << X << std::endl;
    std::cout << "Its perimeter is equal to : " << std::fixed << std::setprecision(2) << circlePerimeter(X) << std::endl;
    std::cout << "Its area is equal to : " << std::fixed << std::setprecision(2) << circleArea(X) << std:: endl;
    std::cout << "A square of side c = " << std::fixed << std::setprecision(2) << X << std::endl;
    std::cout << "Its diagonal is equal to : " << std::fixed << std::setprecision(2) << squareDiagonal(X);

    return 0;
}
