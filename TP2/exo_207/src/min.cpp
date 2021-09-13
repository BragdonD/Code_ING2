#include <iostream>
#include "min.h"

///Fonction testant laquel des 3 valeurs passées en paramètre est la plus petite
///prend des entiers en paramètre
int findMin(int a, int b, int c){
    ///interpreté comme :
    /*
    si a supérieur à b alors 
        si b supérieur à c alors 
            renvoyer c
        sinon renvoyer b
    sinon 
        si a supérieur à c alors 
            renvoyer c
        sinon renvoyer a
    */
    return (a>b ? b>c ? c : b : a>c ? c:a);
}
///Fonction testant laquel des 3 valeurs passées en paramètre est la plus petite
///prend des reels en parametre
float findMin(float a, float b, float c){
     ///interpreté comme :
    /*
    si a supérieur à b alors 
        si b supérieur à c alors 
            renvoyer c
        sinon renvoyer b
    sinon 
        si a supérieur à c alors 
            renvoyer c
        sinon renvoyer a
    */
    return (a>b ? b>c ? c : b : a>c ? c:a);
}