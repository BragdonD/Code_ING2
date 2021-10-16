#include <iostream>
#include "game.h"

std::string Control(std::string& _old);

int main(){
    system("cls");
    game SnakeGame;
    std::string moove = "left"; 
    SnakeGame.generateSnake();
    SnakeGame.printTab();
    do{
        moove = Control(moove);
        SnakeGame.EraseLastPosSnake();
        SnakeGame.moove(moove);
        SnakeGame.CheckApples();
        SnakeGame.putApplesOnPlat();
        SnakeGame.putSnakeOnPlat();
        SnakeGame.printSnake();
        SnakeGame.printApples();
        SnakeGame.printInfo();
        Sleep(100);
    }while(((GetAsyncKeyState(VK_ESCAPE) & 0x8000)==false) && (SnakeGame.CheckEnd()==false));
    goToLigCol(0,55);
    return 0;
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
    std::cout << moove;
    return moove;
}
