#include <iostream>
#include "opeMatrix.h"

///fonction calculant la valeur moyenne des composantes d'une matrice passée en parametre
float averageMatrix(matrix aMatrix){
    ///declaration de la varaible a rendre a la fin
    float result(0.0);
    ///Ajout de toutes les composantes dans la variables result
    for(int i=0; i<aMatrix.m_lig; i++){
        for(int j=0; j<aMatrix.m_col; j++){
            result += aMatrix.components[i][j];
        }
    }
    ///retour de la variable result divisé par les dimensions de la matrice
    return result/(aMatrix.m_col*aMatrix.m_lig);
}
///fonction calculant l'occurence d'un nombre passé en parametre dans la matrice également passée en parametre
int occurrenceIntoMatrix(matrix aMatrix, float nbToSearch){
    ///declaration et initialisation du compteur
    int count(0);
    ///parcours de la matrice
    for(int i=0; i<aMatrix.m_lig; i++){
        for(int j=0; j<aMatrix.m_col; j++){
            ///test si le composant de la matrice et le nombre recherché sont egaux
            if(aMatrix.components[i][j] == nbToSearch){
                ///dans un cas positif on incremente le compteur
                count++;
            }
        }
    }
    return count;
}
///procedure affichant la matrice pair correspondant a la matrice passée en parametre
//cette procedure affiche la matrice et remplace les nb impairs par des 'X'
void printPairMatrix(matrix aMatrix){
    ///parcours de la matrice
    for(int i=0; i<aMatrix.m_lig; i++){
        for(int j=0; j<aMatrix.m_col; j++){
            ///test si la composante est pair
            ///on utilise la fonction fmod qui est une fonction du package std qui represente le modulo pour les float supposé impossible
            if((std::fmod(aMatrix.components[i][j],2.0)) == 0){
                ///cas pair
                std::cout << aMatrix.components[i][j] << '\t';
            }                
            else{
                ///cas impairs
                std::cout << 'X' << '\t';
            }
        }
        std::cout << std::endl;
    }
}
///procedure remplissant une matrice passée en paramètre
void fillMatrix(matrix* aMatrix){
    for(int i=0; i<aMatrix->m_lig; i++){
        for(int j=0; j<aMatrix->m_col; j++){
           std::cout << "Type the number for the case (" << i << ',' << j  << ") : " << std::endl;
           aMatrix->components[i][j] = enterReal();
        }
    }
}