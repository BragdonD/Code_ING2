#ifndef __GAME_H__
#define __GAME_H__
#pragma once

#include "snake.h"
#include "apple.h"
#include <string>

class game
{
    private:
        snake m_snake;
        apple m_apple;
        const int m_width = 50;
        const int m_height = 50;
        char m_plat[50][50];

    public:
        game(/* args */);
        ~game();
        void MooveSnake(std::string& moove);
        bool checkEnd();
        void AddApple();
        void checkNbApple();
        void GenerateApple();
        void printPlateau();
        char** getPlateau();
};

game::game(/* args */)
{
}

game::~game()
{
}


#endif
