#include "entete.h"

int main(){
    int integer;
    float real;
    
    integer = enterInteger();
    real = enterReal();

    std::cout << "You have typed the following integer : " <<  integer << std::endl;
    std::cout << "You have typed the following real : " <<  real << std::endl;
    
    return 0;
}

