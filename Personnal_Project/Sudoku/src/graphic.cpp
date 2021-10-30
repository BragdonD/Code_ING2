#include <iostream>
#include "grid.h"

void grid::printOnWindow(sf::RenderWindow &window){
    std::array<std::array<sf::RectangleShape,9>,9> box;
    sf::Font Roboto;
    std::array<std::array<sf::Text,9>,9> numbers;
    Roboto.loadFromFile("Roboto-Light.ttf");
    for(int i=0; i<9; i++){
        for (int j=0; j<9; j++)
        {
            box[i][j].setSize(sf::Vector2f(BOX_SIZE,BOX_SIZE));
            box[i][j].setPosition(j*BOX_SIZE,i*BOX_SIZE);
            box[i][j].setFillColor(sf::Color::White);
            box[i][j].setOutlineColor(sf::Color::Black);
            box[i][j].setOutlineThickness(2.0f);
            numbers[i][j].setFont(Roboto);
            numbers[i][j].setColor(sf::Color::Black);
            numbers[i][j].setPosition(j*BOX_SIZE + 15,i*BOX_SIZE + 5);
            std::string toPrint;
            if(m_grid[i][j] == 0){toPrint = " ";}
            else{toPrint = std::to_string(m_grid[i][j]);}
            numbers[i][j].setString(toPrint);
            window.draw(box[i][j]);
            window.draw(numbers[i][j]);
        }  
    }
}