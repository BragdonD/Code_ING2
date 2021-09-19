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
    }while(!aRect.setWidth(width));
    do{
        std::cout << "Type the height of the rectangle : " << std::endl;
        height = enterReal();
    }while(!aRect.setHeight(height));
    ///affichage des informations du rectangle
    aRect.printInfo();   
    return 0;
}