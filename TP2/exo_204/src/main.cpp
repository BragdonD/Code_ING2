#include <iostream>
#include <cstdlib>
#include <ctime>
#include "tri.h"



int main(){
    std::srand(std::time(NULL));

    int integerArray[20];
    for(int i=0; i<20; i++){
        integerArray[i] = std::rand()%(10-(-10)+1)+(-10);
        std::cout << integerArray[i] << " / ";
    }
    std::cout << std::endl;
    bubleSort(integerArray,20);
    for(int i=0; i<20; i++){
        std::cout << integerArray[i] << " / ";
    }

    return 0;
    
}

