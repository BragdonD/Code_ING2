#include "entete.h"

int main(){
    ///Declaration des variables nécessaires au traitement
    int integer;
    float real;
    
    ///Appel des fonctions de saisies d'un entier et d'un reel
    /*
    On les utilise car elles permettent de blinder la saisie des nombres et de ne 
    pas bloquer le programme en case de saisie d'un mauvais input
    */
    integer = enterInteger();
    real = enterReal();

    ///Affichage des nombres saisis
    std::cout << "You have typed the following integer : " <<  integer << std::endl;
    std::cout << "You have typed the following real : " <<  real << std::endl;
    
    return 0;
}

