#include <iostream>
#include "database.h"
#include "entete.h"

void menu();

int main(){
    database myDataBase;
    int nb;
    do{
        menu();
        nb = enterInteger();
        switch(nb){
            case 1:
            {
                std::string login, password;
                bool correct(true);
                do{
                    if(correct == false){
                        std::cout << "The login was already existant in the database !!" << std::endl;
                    }
                    std::cout << "Write the new login : " << std::endl;
                    std::cin >> login;
                    std::cout << "Write the password  : " << std::endl;
                    std::cin >> password;
                    correct = myDataBase.addNewLogin(login,password);
                }while(correct == false);
                break;
            }
            case 2:
            {
                std::string login, password;
                std::cout << "Write the login : " << std::endl;
                std::cin >> login;
                password = myDataBase.getPasswordFromLogin(login);
                if(password == "vide"){
                    std::cout << "The login is not present into the database"<<std::endl;
                }
                else{
                    std::cout << "The password is : " <<password << std::endl;
                }
                break;
            }   
            case 3:
            {
                myDataBase.printDataBase();
                break;
            }   
                  
            default:
             std::cout << "This value is not into the menu." << std::endl;
        }
        
    }while(nb!=4);
    return 0;
}

void menu(){
    std::cout << "Choose between the following option:" << std::endl;
    std::cout << "1. Add a new Login." << std::endl;
    std::cout << "2. Search a login and get the password." << std::endl;
    std::cout << "3. Print DataBase." << std::endl;
    std::cout << "4. Leave." << std::endl;
}