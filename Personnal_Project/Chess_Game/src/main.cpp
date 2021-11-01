#include <iostream>
#include "chessboard.h"

int main(){
    sf::RenderWindow window(sf::VideoMode(DIM_CHESSBOARD*SIZE_CASE, DIM_CHESSBOARD*SIZE_CASE),"Chess");
    Chess::chessboard chessBoard;

    chessBoard.initChessBoard();

    while (window.isOpen())
    {
        sf::Event event;
        window.clear();

        chessBoard.drawOnWindow(window);

        window.display();
        while(window.pollEvent(event)){
            if(event.type == sf::Event::Closed){
                window.close();
            }
        }
    }
    
    return 0;
}