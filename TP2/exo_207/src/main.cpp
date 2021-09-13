#include <iostream>
#include "entete.h"
#include "produit_matricielle.h"

int main(){
    ///initialisation du temps a null dans le programme pour pouvoir générer des pseudo-aléatoire
    std::srand(std::time(NULL));
    ///Declarations de deux tabelaux contenant la taille des matrices
    int sizeMatA[2], sizeMatB[2];
    ///Declarations de nos variables matrices, elles seront remplies plus loin dans le programme
    matrix matrixA, matrixB, result;
    ///Saisie des dimensions de la matrice A
    std::cout << "Write the size of the matrix A(n*m) : " << std::endl;
    std::cout << "Write the n component : " << std::endl;
    sizeMatA[0] = enterInteger();
    std::cout << "Write the m component : " << std::endl;
    sizeMatA[1] = enterInteger();
    ///Saisie de la taille du vecteur B comme demandé
    std::cout << "Write the size of the vector B(p*1) : " << std::endl;
    std::cout << "Write the p component : " << std::endl;
    sizeMatB[0] = enterInteger();
    sizeMatB[1] = 1;///comme on demande un vecteur on fixe la deuxieme dimension a 1
    ///Appel du sous programme de creations pour creer les matrices A et B 
    ///allocation + remplissage
    matrixA = createMatrix(sizeMatA[0],sizeMatA[1]);
    matrixB = createMatrix(sizeMatB[0]);
    ///test si la multiplication est possible entre les deux vecteurs
    ///pour rappel le produit de deux matrice pour etre possible doit au moins posseder une dimension de meme taille
    ///Ici on ne considere que le produit A*B et non pas B*A qui sinon nécessiterait de faire plus de vérification
    if(sizeMatA[1]!=sizeMatB[0]){
        std::cout << "Error matrix size do not match : " << std::endl;
        std::cout << "Imposible to calculate.";
    }
    else
    {
        ///cas ou la multiplication matricielle est possible
        ///Affichages des deux matrices
        std::cout << "A matrix :" << std::endl;
        printMatrix(matrixA);
        std::cout << "B matrix :" << std::endl;
        printMatrix(matrixB);
        ///calcul du résultat de la multiplication entre les deux matrices
        result = multiplyMatrixs(matrixA,matrixB);
        ///Affichage du résultat
        printMatrix(result);
        ///liberation du résultat
        destroyMatrix(result);
    }
    ///liberation des deux matrices
    destroyMatrix(matrixA);
    destroyMatrix(matrixB);

    return 0;
}