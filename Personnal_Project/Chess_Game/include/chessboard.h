#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <iostream>
#include <array>
#include <string>
#include <SFML/Graphics.hpp>
#include "pion.h"

#define DIM_CHESSBOARD 8
#define SIZE_CASE 100

namespace Chess{
    enum class Color {White, Black};

    std::string ColorToString(Color color);

    class chessboard
    {
        private:
            std::array<std::pair<Color, pion*>,64> m_board; 
        public:
            chessboard();
            ~chessboard();
            void initChessBoard();
            void drawOnWindow(sf::RenderWindow& window);
            friend std::ostream& operator<<(std::ostream& os, const chessboard& board);
    };
}



#endif