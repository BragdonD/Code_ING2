#include <iostream>
#include "suite.h"
#include "entete.h"

int main(){
    ///Declarations des variables
    int n;///valeur a trouvée
    int u0(1), u1(1);///données de base de la suite
    std::cout << "Type an integer n to calculate U(n) : " << std::endl;
    ///Saisie de la valeur a calculée
    do{
        //Saisie de l'entier
        n = enterInteger();
        ///On test si la valeur vaut plus de car on a deja les deux premieres valeurs de la suite donc inutile de les recalculer
        if(n<2){  
            std::cout << "Impossible to calculate or you already have the answer" << std::endl;
        }
    }while(n<2);
    ///Calcul et affichage de la valeur U(n) de la suite
    std::cout << "U(n) = " << sequence(u1,u0, n) << std::endl;
    return 0;
}