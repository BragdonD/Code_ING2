#include <iostream>
#include <vector>
#include "myexception.h"

int main()
{
    try{
        throw std::bad_alloc();
    }
    catch(std::exception& e){
        myexception temp(e, "eror.txt");
    }
    
    return 0;
}
