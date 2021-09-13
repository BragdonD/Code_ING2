#include <iostream>
#include "fonction.h"
#include "entete.h"

/*
    to test the program you need to use the first choice in first.
    try using the input : Thomas
    the response to the second choice should be : 6
    the response to the third choice should be : 2 and 4;
    for the fourth try using the caracter 'a' and the answer would be : 'Thoms';
    for the fifth try using 'DUCLOS', the answer should be : 'Thomas DUCLOS';
    for the sixth the answer will be : 
*/

int main(){
    ///Declaration des variables permettant de recuperer les entrées utilisateurs
    int choice;
    std::string input;
    do{
        
        bool error(false);
        ///Saisie du choix et verification de sa validité
        do{
            error = false;
            ///Affichage du menu de choix
            menu();
            std::cout << "Your choice : ";
            choice = enterInteger();
            if(choice<=0 || choice>=8){
                error = true;
            }
        }while(error);
        ///Application en fonction du choix 
        ///voir le menu pour voir a quoi correspond chaque cas
        if(choice == 1){
            input = enterString();
        }
        else if(choice == 2){
            stringSize(input);
        }
        else if(choice == 3){
            std::cout << "The number of vowels into the string is : " << countVowel(input) << std::endl;
            std::cout << "The number of consonnants into the string is : " << countConsonant(input) << std::endl;
        }
        else if(choice == 4){
            int caraToDelete;
            std::cout << "Which character do you want to delete ?" << std::endl;
            std::cin >> caraToDelete;
            std::cout << "The result of the operation is : " << deleteCaracter(input,caraToDelete) << std::endl;
        }
        else if(choice == 5){
            std::string newString;
            std::cout << "Type the new string to concatenate : ";
            std::cin >> newString;
            std::cout << "The result of the concatenation is : " << concatenateString(input,newString) << std::endl;
        }
        else if(choice == 6){
            std::cout << "The result of the operation is : " << up1ToAsciiOfString(input) << std::endl;
        }

    }while(choice!=7);

    return 0;
}