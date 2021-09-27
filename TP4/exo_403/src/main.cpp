#include <iostream>
#include "printer.h"
#include "entete.h"

void menu();

int main(){
    printer myPrinter;
    int choice(0);
    do{
        menu();
        choice = enterInteger();
        switch(choice)
        {
        case 1:
        {
            std::string name,id;
            std::cout << "Write the name of the document : " << std::endl;
            std::cin >> name;
            std::cout << "Write the id of the document : " << std::endl;
            std::cin >> id;
            myPrinter.addFile(file(name,id));            
            break;
        }
        case 2:
        {
            std::string id;
            std::cout << "Write the id of the document : " << std::endl;
            std::cin >> id;
            myPrinter.deleteFileById(id);
            break;
        }
        case 3 :
        {
            std::string name;
            std::cout << "Write the name of the document : " << std::endl;
            std::cin >> name;
            myPrinter.deleteFileByName(name);
            break;
        }
        case 4 :
            myPrinter.printAllFiles();
            break;
        case 5 :
            myPrinter.deleteAllFiles();
            break;
        case 6 :
            break;
        default:
            std::cout << "Cette valeur n'est pas valide" << std::endl;
        };
    }while(choice!=6);

    return 0;
}

void menu(){
    std::cout << "Make a choice : " << std::endl;
    std::cout << "1. Add a new document." << std::endl;
    std::cout << "2. Delete a document by his ID." << std::endl;
    std::cout << "3. Delete a document by his Name." << std::endl;
    std::cout << "4. Show all the document in the queue." << std::endl;
    std::cout << "5. Delete all documents in the queue." << std::endl;
    std::cout << "6. Leave." << std::endl;
}