#ifndef __PRODUIT_MATRICIELLE_H__
#define __PRODUIT_MATRICIELLE_H__

#include <cstdlib>
#include <ctime>
#include "min.h"

///structure d'une matrice
struct matrix
{
    float** components;///tableau dynamique contenant les composantes de la matrice une fois alloué
    int m_col, m_lig;///dimensions de la matrices
};

matrix createMatrix(int n_lig, int n_col = 1);
void printMatrix(matrix aMatrix);
matrix multiplyMatrixs(matrix matrix1, matrix matrix2);
void destroyMatrix(matrix aMatrix);

#endif