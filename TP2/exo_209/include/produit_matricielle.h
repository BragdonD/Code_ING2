#ifndef __PRODUIT_MATRICIELLE_H__
#define __PRODUIT_MATRICIELLE_H__

#include <cstdlib>
#include <ctime>

struct matrix
{
    float** components;
    int m_col, m_lig;
};

matrix createMatrix(int n_lig, int n_col = 1);
void printMatrix(matrix aMatrix);
matrix multiplyMatrixs(matrix matrix1, matrix matrix2);
void destroyMatrix(matrix aMatrix);

#endif