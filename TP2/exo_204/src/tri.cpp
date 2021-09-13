#include <iostream>
#include "tri.h"

///procédure de tri à bulle
///recoit un tableau d'entier et sa taille en paramètre
void bubleSort(int *integerArray, int size){
    bool done(false);///boolean indiquant si on a fini de traiter le tableau 
    ///Commence le tri
    for(int i=size; i>=1 ; i--){
        done = true;///on transite la valeur a true pour pouvoir quitter le programme dans le cas ou finit plus tot
        for(int j=0; j<i-1;j++){
            ///test si l'element d'apres et superieur a celui d'avant
            ///si oui alors on quite le programme
            ///sinon on intervertit les deux
            if(integerArray[j+1]<integerArray[j]){
                int temp = integerArray[j];
                integerArray[j] = integerArray[j+1];
                integerArray[j+1] = temp;
                done = false;///on transite la valeur pour indiquer que le traitement n'est pas fini
            }
        }
        ///Condition pour quitter la boucle
        if(done){
            break;
        }
    }
}