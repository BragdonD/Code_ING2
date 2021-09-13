#include <iostream>
#include "fonctions.h"
//fonction retournant le carré d'un nombre envoyé en paramètre
float squareFunction(float a){
    return a*a;
}
///fonction calculant le perimetre d'un cercle dont le rayon est passé en paramètre
float circlePerimeter(float r){
    return 2*M_PI*r;
}
///fonction calculant l'air d'un cercle dont le rayon est passéen paramètre
float circleArea(float r){
    return 2*M_PI*squareFunction(r);
}
///fonction calculant la diagonale d'un carré dont le coté est passé en parametre
float squareDiagonal(float c){
    ///sqrt est une fonction de la bibliotheque cmaths et correspond a la racine carrée
    return sqrt(2*(squareFunction(c)));
}