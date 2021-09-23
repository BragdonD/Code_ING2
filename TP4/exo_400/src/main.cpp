#include <iostream>
#include "tri.h"
#include "entete.h"

int main(){
    std::vector<int> myTab;
    int size;
    int highestVal(10), lowestVal(-10);

    std::cout << "Write the size the wanted size : " << std::endl;
    size = enterInteger();
    myTab = randTab(size,highestVal,lowestVal);
    std::cout << "Before randing : " << std::endl;
    printVectorTabInt(myTab);
    sort(&myTab);
    std::cout << "After randing : " << std::endl;
    printVectorTabInt(myTab);

    
    return 0;
}