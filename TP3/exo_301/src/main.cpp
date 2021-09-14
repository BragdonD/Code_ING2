#include <iostream>
#include "compteur.h"

int main(){
    ///definition des variables pour l'exercice
    counter myCount(0);
    int nb_incremt(10);
    int nb_decremt(20);
    ///boucle de 10 incrementation
    for(int i=0; i<nb_incremt;i++){
        myCount.increment(1);
        std::cout << myCount.getValue() <<  " / ";
    }
    ///boucle de 20 decrementation
    std::cout << std::endl;
    for(int i=0; i<nb_decremt;i++){
        myCount.decrement(1);
        std::cout << myCount.getValue() <<  " / ";
    }
    ///affichage de la valeur finale
    std::cout<< std::endl << "The last value of the counter is : " << myCount.getValue() << std::endl;
    return 0;

}
