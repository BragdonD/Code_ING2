#include <iostream>
#include "hanoi.h"
#include "entete.h"

int main(){
    int nbDisk;
    hanoi towerOfHanoi;
    std::cout << "Write the number of disk : " << std::endl;
    nbDisk = enterInteger();
    towerOfHanoi.setNbDisk(nbDisk);
    towerOfHanoi.InitTowers();
    towerOfHanoi.toh(0,1,2,towerOfHanoi.getNbDisk());
    towerOfHanoi.printTowers();
    return 0;
}