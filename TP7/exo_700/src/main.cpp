#include <iostream>
#include "function.h"

int main(){
    std::vector<int> test = {4, 6, 9, 7, 8, 1, -8};

    int average = Average(test);

    std::cout << "The average is : " << average << std::endl;
    return 0;
}
