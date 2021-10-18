#include <iostream>
#include "losange.h"
#include "rectangle.h"

int main(){
    std::vector<float> temp = {2.5,3.6,2.5,3.6};
    rectangle myRect;
    losange myLos;

    myRect.setHeight(2.5);
    myRect.setWidth(3.6);
    myRect.setNbSide(4);
    myRect.setSideWidth(temp);
    myRect.CalculPerimeter();
    myRect.CalculArea();

    myLos.setHeight(3.6);
    myLos.setWidth(9.6);
    myLos.setNbSide(4);
    myLos.CalculSideWidth();
    myLos.CalculPerimeter();
    myLos.CalculArea();

    std::cout<<"Rectangle"<<std::endl;
    std::cout<<"Width : " << myRect.getWidth() << std::endl;
    std::cout<<"Height : "<< myRect.getheight() << std::endl;
    std::cout<<"Nb Side : "<< myRect.getNbSide() << std::endl;
    for(int i=0; i<myRect.getNbSide();i++){
        std::cout << "Side n " << i << " = " << myRect.getSideWidth()[i] << std::endl;
    }
    std::cout<<"Perimeter : "<<myRect.getPerimeter()<<std::endl;
    std::cout<<"Area : "<<myRect.getArea()<<std::endl<<std::endl;

    std::cout<<"Losange"<<std::endl;
    std::cout<<"Width : " << myLos.getWidth() << std::endl;
    std::cout<<"Height : "<< myLos.getheight() << std::endl;
    std::cout<<"Nb Side : "<< myLos.getNbSide() << std::endl;
    for(int i=0; i<myLos.getNbSide();i++){
        std::cout << "Side n " << i << " = " << myLos.getSideWidth()[i] << std::endl;
    }
    std::cout<<"Perimeter : "<<myLos.getPerimeter()<<std::endl;
    std::cout<<"Area : "<<myLos.getArea()<<std::endl;
    return 0;
}