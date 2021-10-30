#include <iostream>
#include <chrono>
#include "grid.h"

int main(){
    std::srand(std::time(NULL));    
    grid randomGrid;
    sf::RenderWindow window(sf::VideoMode(BOX_SIZE*9,BOX_SIZE*9),"Sudoku");
    std::cout << "SOLUTION : " << std::endl;
    auto start = std::chrono::steady_clock::now();
    int nbOfAttemps = randomGrid.generateGrid();
    auto end = std::chrono::steady_clock::now();
    randomGrid.printGrid();
    std::cout << "GRID : " << std::endl;
    randomGrid.removeSomeNumbers();
    randomGrid.printGrid();
    do
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        
        randomGrid.printOnWindow(window);
        window.display();
    }while(window.isOpen());
    
    auto elapsedTime = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "the grid has been generated in " <<  elapsedTime.count() << "ms  and " << nbOfAttemps << " number of attemps" << std::endl;
    return 0;
}

