#include <iostream>
#include "function.h"

int main()
{
    std::vector<int> temp = {1,2,3,9,5,6,7,2};
    std::vector<char> temp2 = {'z','e','a','b','c','e','d','g'};
    std::vector<std::string> temp3 = {"Thomas"," ","Duclos"," ","ING2"," ","TD6"};

    Vector<int> tempInt(temp);
    Vector<char> tempChar(temp2);
    Vector<std::string> tempString(temp3);

    tempInt.sum();
    tempChar.sum();
    tempString.sum();

    std::cout << tempInt;
    std::cout << tempChar;
    std::cout << tempString;

    return 0;
}
