#include "iostream"
#include "elf.h"
#include "enemy.h"
#include "warior.h"
#include "wizard.h"

int main(){
    character *pers = new elf("Amandil");
    character *evil = new enemy("Enemy");

    do{
        std::cout << *pers << std::endl;
        std::cout << *evil << std::endl;
    
    }while(pers->attaquer(evil)!=false && evil->attaquer(pers)!=false);  

    delete pers;
    delete evil;
    return 0;
}   