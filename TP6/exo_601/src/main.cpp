#include <iostream>
#include "function.h"

int main()
{
    std::vector<int> temp = {1,2,3,9,5,6,7,2};
    std::vector<char> temp2 = {'z','e','a','b','c','e','d','g'};

    Vector<int> tempInt(temp);
    Vector<char> tempChar(temp2);

    tempInt.sort();
    tempChar.sort();

    std::cout << tempInt;
    std::cout << tempChar;
    return 0;
}
