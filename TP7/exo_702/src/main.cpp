#include <iostream>
#include "point.h"

int main()
{
    for(int i = 0; i < 4; i++){
        std::pair<double,double> coord = {0.0,0.0};
        std::cout << "Write the coordinate (x,y) of the point they need to be between 0.0 and 1.0." << std::endl;
        std::cout << "x : ";
        std::cin >> coord.first;
        std::cout << "y : ";
        std::cin >> coord.second;

        point temp(coord);
    }
    return 0;
}
