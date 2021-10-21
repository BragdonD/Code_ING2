#include <iostream>
#include "truck.h"
#include "car.h"
#include "moto.h"

int main(){
    cargo temp("bananes");
    truck aTruck("ATRUCK",0,"Black","Mercedes");
    car aCar("ACAR",0,"Red","Audi");
    moto aMoto("AMOTO",0,"Grey","Suzuki");

    addPersonToTruck(aTruck);
    addPersonToTruck(aTruck);

    addMultiplePersonToCar(aCar,3);

    addPersonToMoto(aMoto);

    aTruck.setSpeedVehicule(150.0);
    aMoto.setSpeedVehicule(150.0);
    aCar.setSpeedVehicule(150.0);

    std::cout << aTruck << std::endl;
    std::cout << aCar << std::endl;
    std::cout << aMoto << std::endl;

    aTruck.setSpeedVehicule(90.0);
    aMoto.setSpeedVehicule(90.0);
    aCar.setSpeedVehicule(90.0);

    std::cout << aTruck << std::endl;
    std::cout << aCar << std::endl;
    std::cout << aMoto << std::endl;

    aTruck.setCargaison(&temp);

    std::cout << aTruck << std::endl;
    std::cout << aCar << std::endl;
    std::cout << aMoto << std::endl;

    aTruck.setCargaison(NULL);

    std::cout << aTruck << std::endl;

    return 0;
}