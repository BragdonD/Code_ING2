#include <iostream>
#include "loginId.h"

int main(){
    loginId Registre("1234","ThomasD");
    std::string loginWrited, passwordWrited;
    bool test;
    do{
        std::cout << "Write your login id : " << std::endl;
        std::cin >> loginWrited;
        std::cout << "Write your password : " << std::endl;
        std::cin >> passwordWrited;
        test = Registre.compareInput(passwordWrited,loginWrited);
        if(test!=true){
            std::cout << "You have entered a wrong password" << std::endl;
        }
    }while(test!=true);

    std::cout << "You succeed to connect" << std::endl;
    return 0;
}
