#include <iostream>
#include "myHash.h"
#include "entete.h"

void menu();


int main(){
    std::unordered_map<std::size_t,std::string,hashFunc, std::equal_to<std::size_t>> myDictionary;
    int choice;

    myDictionary = GetTheDictionary();
    
    do{
        menu();
        choice = enterInteger();
        switch (choice)
        {
        case 1:{
            std::string toSearch;
            std::cout << "Write the word to search into the dictionary : " << std::endl;
            std::cin >> toSearch;
            if(DoesTheWordExist(toSearch,myDictionary)){
                std::cout << "The word is contain in the dictionary." << std::endl;
            }
            else{
                std::cout << "The word is not contain in the dictionary." << std::endl;
            }
            break;
        }
        default:
            break;
        }
    }while(choice!=2);
    return 0;
}



void menu(){
    std::cout << "Choose between the following choice : " << std::endl;
    std::cout << "1. Search a word." << std::endl;
    std::cout << "2. Leave." << std::endl;
}