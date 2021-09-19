#include <iostream>
#include "line.h"
#include "entete.h"

int main(){
    float x1,x2,y1,y2;
    line aLine;
    int nbRndPoints;
    std::cout << "Type the first point x coordonate : " << std::endl;
    x1 = enterReal();
    std::cout << "Type the first point y coordonate : " << std::endl;
    y1 = enterReal();
    aLine.setPoint1(x1,y1);
    do{
        std::cout << "Type the second point x coordonate : " << std::endl;
        x2 = enterReal();
        std::cout << "Type the second point y coordonate : " << std::endl;
        y2 = enterReal();
    }while(!aLine.setPoint2(x2,y2));
    std::cout << "The cartesian eqt for the line passing throught this two points is : " << std::endl;
    aLine.printEqtCart();

    
    std::cout << "How many randoms point of the line do you want : " << std::endl;
    do{
        nbRndPoints = enterInteger();
    }while(nbRndPoints<1);
    aLine.printPoints(nbRndPoints);

    return 0;
}