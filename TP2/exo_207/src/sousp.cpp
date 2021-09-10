#include "entete.h"

int enterInteger(){
    int integer;
    bool error(false);
    ///
    do{
        error = false;
        std::cout << "Type an integer : " << std::endl;
        std::cin >> integer;
        if(std::cin.fail()){
            error = true;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }while(error);
    std::cout << "You have typed a corrected input" << std::endl;
    return integer;
}

float enterReal(){
    float real;
    bool error(false);
    do{
        error = false;
        std::cout << "Type a real : " << std::endl;
        std::cin >> real;
        if(std::cin.fail()){
            error = true;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }while(error);
    std::cout << "You have typed a correct input" << std::endl;
    return real;
}