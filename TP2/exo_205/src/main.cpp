#include <iostream>
#include "entete.h"
#include "min.h"

/*
    To test you can use :
        -integer : 2/3/-1
            expected output : -1
        -reals : 9.0/5.5/9.1
            expected output : 5.5
*/

int main(){
    ///Declarations des variables
    int a,b,c;
    float d,e,f;
    ///Saisie des 3 entiers
    std::cout << "Write three integers : " << std::endl;
    a = enterInteger();
    b = enterInteger();
    c = enterInteger();
    ///Appel de la procèdure indiquant laquel des 3 i=varaibles est la plus petite
    std::cout << "The minimum of the three integer is : " << findMin(a,b,c) << std::endl;
    ///meme chose mais pour des reels cette fois
    std::cout << "Write three reals : " << std::endl;
    d = enterReal();
    e = enterReal();
    f = enterReal();
    std::cout << "The minimum of the three reals is : " << findMin(d,e,f) << std::endl;
    return 0;
}