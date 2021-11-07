#include <iostream>
#include "chessboard.h"

int main(){
    sf::RenderWindow window(sf::VideoMode::getDesktopMode(),"Chess",sf::Style::Fullscreen);
    Chess::chessboard chessBoard;

    chessBoard.initChessBoard();

    while (window.isOpen())
    {
        sf::Event event;
        window.clear(sf::Color(255,0,0));

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