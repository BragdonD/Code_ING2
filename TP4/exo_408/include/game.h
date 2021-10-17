#ifndef __GAME_H__
#define __GAME_H__
#pragma once

#define RANGE_V 52
#define RANGE_H 52

#include <windows.h>
#include <array>
#include <ctime>
#include "snake.h"
#include "apple.h"

class game
{
    private:
        std::array<std::array<char,RANGE_H>,RANGE_V> m_plat;
        char m_wallCara = '@';
        std::string m_direction;
        bool m_loose = false;
        int m_points = 0;
        snake m_snake;
        std::vector<apple> m_apples;
        int m_nbApple = 3;

    public:
        game();
        ~game();
        bool CheckEnd() const;
        void CheckApples();
        int getPoint() const;
        char getWallCara() const;
        std::array<std::array<char,RANGE_H>,RANGE_V> getTab() const;
        void setScore(int _score);
        void setLoose(int _loose);
        void setNbApple(int _nb);
        void generateSnake();
        void generateApple();
        void printTab() const;
        void printInfo() const;
        void putSnakeOnPlat();
        void putApplesOnPlat();
        void printApples();
        void printSnake();
        void moove(std::string& _moove);
        void EraseLastPosSnake();
};

coordinates generateRandomCoordinates();
void goToLigCol(int _x, int _y);

#endif