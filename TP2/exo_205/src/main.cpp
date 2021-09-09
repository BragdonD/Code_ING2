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
    int a,b,c;
    float d,e,f;
    std::cout << "Write three integers : " << std::endl;
    a = enterInteger();
    b = enterInteger();
    c = enterInteger();
    std::cout << "The minimum of the three integer is : " << findMin(a,b,c) << std::endl;
    
    std::cout << "Write three reals : " << std::endl;
    d = enterReal();
    e = enterReal();
    f = enterReal();
    std::cout << "The minimum of the three reals is : " << findMin(d,e,f) << std::endl;
    return 0;
}