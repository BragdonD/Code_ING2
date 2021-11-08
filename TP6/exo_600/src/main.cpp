#include <iostream>
#include "function.h"

int main(int argc, char const *argv[])
{
    std::cout << Average<float>(1.0f, 2.0f) << std::endl;
    std::cout << Average<int>(3, 5) << std::endl;
    std::cout << (char)Average<char>('a', 'z') << std::endl;
    return 0;
}
