#include <iostream>
#include <SFML/Graphics.hpp>
#include "game.h"

std::string Control(std::string& _old);
void setColor(const std::array<std::array<char,RANGE_H>,RANGE_V>& _plat, std::array<std::array<sf::RectangleShape,RANGE_H>,RANGE_V>& _graphicTab);
void SetColorAndSize(std::array<std::array<sf::RectangleShape,RANGE_H>,RANGE_V>& tab);


int main(){
    std::srand(std::time(NULL));
    game SnakeGame;
    std::string moove = "left"; 
    SnakeGame.generateSnake();
    sf::RenderWindow window(sf::VideoMode(RANGE_V*10, RANGE_H*10 + 100), "SFML works!");
    std::array<std::array<sf::RectangleShape,RANGE_H>,RANGE_V> tab;
    std::string text("Score = " + std::to_string(SnakeGame.getPoint()));
    sf::Font Font;
    Font.loadFromFile("font/Roboto-Light.ttf");
    sf::Text score(text,Font, 30);
    sf::Vector2f Position;
    Position.x = 50;
    Position.y = (RANGE_V+2)*10;
    score.setPosition(Position);
    SetColorAndSize(tab);
    do{
        sf::Event event;
        window.clear();
        moove = Control(moove);
        SnakeGame.EraseLastPosSnake();
        SnakeGame.moove(moove);
        SnakeGame.CheckApples();
        SnakeGame.putApplesOnPlat();
        SnakeGame.putSnakeOnPlat();
        score.setString("Score = " + std::to_string(SnakeGame.getPoint()));
        
        setColor(SnakeGame.getTab(), tab);
        for(int i=0; i<RANGE_V; i++){
            for(int j=0; j<RANGE_H; j++){
                window.draw(tab[i][j]);
            }
        }
        window.draw(score);
        window.display();
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        Sleep(75);
    }while(((GetAsyncKeyState(VK_ESCAPE) & 0x8000)==false) && (SnakeGame.CheckEnd()==false) && window.isOpen());
    if(window.isOpen()){
        window.close();
    }

    return 0;
}

void setColor(const std::array<std::array<char,RANGE_H>,RANGE_V>& _plat, std::array<std::array<sf::RectangleShape,RANGE_H>,RANGE_V>& _graphicTab){
    for(int i=0; i<RANGE_V; i++){
        for(int j=0; j<RANGE_H; j++){
            if(_plat[i][j] == 'P'){
                _graphicTab[i][j].setFillColor(sf::Color::Red);
            }
            else if(_plat[i][j] == '*'){
                _graphicTab[i][j].setFillColor(sf::Color::Blue);
            }
            else if(i == 0 || j == 0 || i == RANGE_V-1 || j == RANGE_H-1){
                _graphicTab[i][j].setFillColor(sf::Color::Black);
            }
            else{
                _graphicTab[i][j].setFillColor(sf::Color::White);
            }
        }
    }
}

std::string Control(std::string& _old){
    std::string moove = _old;
    if(GetAsyncKeyState(VK_UP) & 0x8000){
        moove = "up";
        if(testDirection(_old,moove) == false){
            moove = _old;
        }
    }
    else if(GetAsyncKeyState(VK_RIGHT) & 0x8000){
        moove = "right";
        if(testDirection(_old,moove) == false){
            moove = _old;
        }
    }
    else if(GetAsyncKeyState(VK_LEFT) & 0x8000){
        moove = "left";
        if(testDirection(_old,moove) == false){
            moove = _old;
        }
    }
    else if(GetAsyncKeyState(VK_DOWN) & 0x8000){
        moove = "down";
        if(testDirection(_old,moove) == false){
            moove = _old;
        }
    }
    goToLigCol(0,56);
    //std::cout << moove;
    return moove;
}

void SetColorAndSize(std::array<std::array<sf::RectangleShape,RANGE_H>,RANGE_V>& tab){
    sf::Vector2f size;
    size.x = 10;
    size.y = 10;
    for(int i=0; i<RANGE_V; i++){
        for(int j=0; j<RANGE_H; j++){
            sf::Vector2f position;
            position.x = size.x * (j);
            position.y = size.y * (i);
            tab[i][j].setSize(size);
            tab[i][j].setPosition(position);
            if(i == 0 || j == 0 || i == RANGE_V-1 || j == RANGE_H-1){
                tab[i][j].setFillColor(sf::Color::Black);
            }
            else{
                tab[i][j].setFillColor(sf::Color::White);
            }
        }
    }
}
