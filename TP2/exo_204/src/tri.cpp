#include <iostream>
#include "tri.h"

void bubleSort(int *integerArray, int size){
    bool done(false);
    for(int i=size; i>=1 ; i--){
        done = true;
        for(int j=0; j<i-1;j++){
            if(integerArray[j+1]<integerArray[j]){
                int temp = integerArray[j];
                integerArray[j] = integerArray[j+1];
                integerArray[j+1] = temp;
                done = false;
            }
        }
        if(done){
            break;
        }
    }
}