#include <iostream>
#include "game.h"
#include "entete.h"

void menu();

int main(){
    int choice;
    game MyGame;
    do{
        menu();
        choice = enterInteger();
        switch(choice){
            case 1:{
                std::string name;
                int position;
                std::cout << "Write the name of the personage to add : " << std::endl;
                std::cin >> name;
                do{
                    std::cout << "Write the position where you wanna see him add : (0 to 200)" << std::endl;
                    position = enterInteger();
                }while(position<0 || position>200);
                MyGame.AddPersToPos(position,personage(name));
                break;                
            }
            case 2:
                std::cout << "The number of personage in this game is : " << MyGame.getNbPersTotal() << std::endl;
                break;
            case 3:{
                int position;
                do{
                    std::cout << "Write the position where you wanna see him add : (0 to 200)" << std::endl;
                    position = enterInteger();
                }while(position<0 || position>200);
                std::cout << "The number of personage at the position " << position << " is : " << MyGame.getNbPersOnPos(position) << std::endl;
                break;
            }

        }
    }while(choice!=4);
    return 0;
}

void menu(){
    std::cout << "Choose between the fllowing action : "<< std::endl;
    std::cout << "1. Add a personnage" << std::endl;
    std::cout << "2. Find the number of personnage in the game." << std::endl;
    std::cout << "3. Find the number of personnage on of the case (0 to 200)." << std::endl;
    std::cout << "4. Leave" << std::endl;
}