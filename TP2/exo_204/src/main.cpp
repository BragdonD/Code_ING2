#include <iostream>
#include <cstdlib>
#include <ctime>
#include "tri.h"

int main(){
    ///initialisation du temps en début de programme pour permettre d'avoir un pseudo-aléatoire
    std::srand(std::time(NULL));
    ///declarations des variables
    int integerArray[20];
    ///generation des entiers aleatoirement dans [-10;10]
    for(int i=0; i<20; i++){
        integerArray[i] = std::rand()%(10-(-10)+1)+(-10);
        ///On affiche les nombres tirés pour simple mesure de vérification du programme
        std::cout << integerArray[i] << " / ";
    }
    std::cout << std::endl;
    ///Appel du sous programme de tri de l'array de nombre par ordre croissant
    bubleSort(integerArray,20);
    ///Affichage du résultat pour vérifier
    for(int i=0; i<20; i++){
        std::cout << integerArray[i] << " / ";
    }

    return 0;
}

