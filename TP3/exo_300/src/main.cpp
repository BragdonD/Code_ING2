#include <iostream>
#include "entete.h"
#include "rectangle.h"

int main(){
    ///declarations des variables
    rectangle aRect;///notre rectangle
    float width, height;///ses dimensions
    ///saisie des données par l'utilisateurs
    do{
        std::cout << "Type the width of the rectangle : " << std::endl;
        width = enterReal();
    }while(width<=0);
    do{
        std::cout << "Type the height of the rectangle : " << std::endl;
        height = enterReal();
    }while(height<=0);
    ///On modifie les valeurs stockées dans l'objet par les valeurs rentrées par l'utilisateurs
    aRect.changeWidth(width);
    aRect.changeHeight(height);
    ///affichage des informations du rectangle
    aRect.printInfo();   
    return 0;
}