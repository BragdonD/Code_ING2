#include <iostream>
#include <chrono>
#include "grid.h"

int main(){
    std::srand(std::time(NULL));    
    grid randomGrid;
    auto start = std::chrono::steady_clock::now();
    int nbOfAttemps = randomGrid.generateGrid();
    auto end = std::chrono::steady_clock::now();
    randomGrid.printGrid();
    auto elapsedTime = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "the grid has been generated in " <<  elapsedTime.count() << "ms  and " << nbOfAttemps << " number of attemps" << std::endl;
    return 0;
}

