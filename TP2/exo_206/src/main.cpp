#include <iostream>
#include "suite.h"
#include "entete.h"

int main(){
    int n;
    int u0(1), u1(1);
    std::cout << "Type an integer n to calculate U(n) : " << std::endl;
    do{
        n = enterInteger();
        if(n<2){
            std::cout << "Impossible to calculate or you already have the answer" << std::endl;
        }
    }while(n<2);
    std::cout << "U(n) = " << sequence(u1,u0, n) << std::endl;
    return 0;
}