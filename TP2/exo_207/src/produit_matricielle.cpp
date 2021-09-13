#include <iostream>
#include "produit_matricielle.h"

///Fonction de création d'une matrice
///Elle recoit en parametre les dimensions de la matrice a créér
///Rempli également la matrice avec des nombres aléatoire
matrix createMatrix(int n_lig, int n_col)
{
    ///declaration de la matrice a rendre en fin de programme
    matrix temp;
    ///remplissage des dimenssions avec les valeurs passées en parametre 
    temp.m_lig = n_lig;
    temp.m_col = n_col;
    ///allocation de la premiere dimension
    temp.components = new float*[n_lig];
    ///allocation de la deuxieme dimension
    for(int i=0; i<n_lig; i++){
        temp.components[i] = new float[n_col];
        ///remplissage aléatoire de la matrice
        for(int j=0; j<n_col; j++){
            temp.components[i][j] = std::rand();
        }
    }
    return temp;
}
///procedure d'affichage de la matrice passée en parametre
void printMatrix(matrix aMatrix){
    for(int i=0; i<aMatrix.m_lig; i++){
        for(int j=0; j<aMatrix.m_col; j++){
            std::cout << aMatrix.components[i][j] << '\t';
        }
        std::cout << std::endl;
    }
}
///Fonction de multiplication matricielle
///elle recoit les deux matrices a multiplié en parametre
///elle retourne la matrice résultat en fin de traitement
matrix multiplyMatrixs(matrix matrix1, matrix matrix2){
    ///declaration de la matrice resultat
    matrix result;
    ////transfert des dimensions
    result.m_col = matrix2.m_col;
    result.m_lig = matrix1.m_lig;
    ///allocations du tableau de la matrice
    result.components = new float*[result.m_lig];
    ///allocation de la deuxieme dimension du tableau
    for(int i=0; i<result.m_lig;i++){
        result.components[i] = new float[result.m_col];
    }
    ///Application de l'algorithme de la mutliplicaiton matricielle de deux vecteurs de Wikipedia
    for(int i=0; i<result.m_lig; i++)
    {
        for(int j=0; j<result.m_col; j++)
        {
            result.components[i][j] = 0.0;
            for(int k=0; k<matrix1.m_col; k++)
            {
                result.components[i][j] += (matrix1.components[i][k] * matrix2.components[k][j]);
            }
        }
    }
    return result;
}
///procedure de desalocation de la memoire allouée pour le tableau de la matrice
void destroyMatrix(matrix aMatrix){
    for(int i=0; i<aMatrix.m_lig; i++){
        delete[] aMatrix.components[i];
    }
    delete[] aMatrix.components;
}



