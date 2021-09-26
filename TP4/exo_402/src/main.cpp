#include <iostream>
#include "hanoi.h"

int main(){
    hanoi towerOfHanoi(3);
    towerOfHanoi.InitTowers();
    towerOfHanoi.toh(0,1,2,towerOfHanoi.getNbDisk());
    towerOfHanoi.printTowers();
    return 0;
}