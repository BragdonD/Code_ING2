#include <iostream>
#include "chessboard.h"

std::string Chess::ColorToString(Color color){
    return (color == Color::Black ? "Black" : "White");
}

Chess::chessboard::chessboard(){}

Chess::chessboard::~chessboard(){}

void Chess::chessboard::initChessBoard(){
    int m(0);
    for(int i = 0; i < DIM_CHESSBOARD; i++){
        for(int j = 0; j < DIM_CHESSBOARD; j++){
            if(i % 2 == 0){
                if(j % 2 == 0){
                    m_board[m].first = Chess::Color::White;
                }
                else{
                    m_board[m].first = Chess::Color::Black;
                }
            }
            else{
                if(j % 2 == 0){
                    m_board[m].first = Chess::Color::Black;
                }
                else{
                    m_board[m].first = Chess::Color::White;
                }
            }
            m_board[m].second = NULL;
            m++;
        }
    }
}

void Chess::chessboard::drawOnWindow(sf::RenderWindow& window){
    int m(0);
    for(int i = 0; i < DIM_CHESSBOARD; i++){
        for(int j = 0; j < DIM_CHESSBOARD; j++){
            sf::RectangleShape rect(sf::Vector2f(SIZE_CASE,SIZE_CASE));
            if(m_board[m].first == Chess::Color::White){
                rect.setFillColor(sf::Color::White);
            }
            else{
                rect.setFillColor(sf::Color::Black);
            }
            rect.setPosition(SIZE_CASE*i, SIZE_CASE*j);
            window.draw(rect);
            m++;
        }
    }
}

std::ostream& Chess::operator<<(std::ostream& os, const chessboard& board){
    int m(0);
    for(int i = 0; i < DIM_CHESSBOARD; i++){
        for(int j = 0; j < DIM_CHESSBOARD; j++){
            os << Chess::ColorToString(board.m_board[m].first) << " ";
            m++;
        }
        os << std::endl;
    }
    return os;
}

