#include <iostream>
#include "entete.h"

int main(){
    float* reals = new float[11];
    int size(11);

    for(int i=0; i<size-1; i++){
        reals[i] = enterReal();
    }
    reals[size-1] = calculateAverage(reals,size);
    
    for(int i=0; i<size; i++){
        std::cout << reals[i] << std::endl;
    }

    delete[] reals;

    return 0;
}


