#include <iostream>
#include "suite.h"
#include "entete.h"

int main(){
    int n;
    int u0(1), u1(1);
    std::cout << "Type an integer n to calculate U(n) : " << std::endl;
    n = enterInteger();
    std::cout << "U(n) = " << sequence(u1,u0, n) << std::endl;
    return 0;
}