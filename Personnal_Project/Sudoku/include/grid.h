#ifndef GRILLE_H
#define GRILLE_H

#include <iostream>
#include <array>
#include <vector>
#include <ctime>
#include <algorithm>
#include <SFML/Graphics.hpp>

#define BOX_SIZE 50

class grid
{
    private:
        std::array<std::array<int,9>,9> m_grid;
        
        ///Function that are not to be called by anyone
        void ResetLine(int index);
        void resetBlock(int lineInput, int columnInput);
        bool fillBlock(int lineInput, int columnInput, std::vector<int>& values);
        void fillLastBlock(int lineInput, int columnInput, std::vector<int>& values);
        bool isInColumn(int valueToTest, int IndexColumn);
        bool isInLine(int valueToTest, int IndexLine);
        std::vector<int> getColumn(int index) const;
        std::vector<int> getLine(int index) const;
        std::vector<int> getBlock(int lineInput, int columnInput);
        bool checkValidity();
        void resetGrid();
        
    public:
        grid();
        ~grid();
        int generateGrid();
        void removeSomeNumbers();
        void printGrid();
        void printOnWindow(sf::RenderWindow &window);
};

#endif