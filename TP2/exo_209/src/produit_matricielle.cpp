#include <iostream>
#include "produit_matricielle.h"


matrix createMatrix(int n_lig, int n_col)
{
    matrix temp;
    temp.m_lig = n_lig;
    temp.m_col = n_col;
    temp.components = new float*[n_lig];
    for(int i=0; i<n_lig; i++){
        temp.components[i] = new float[n_col];
        for(int j=0; j<n_col; j++){
            temp.components[i][j] = std::rand();
        }
    }
    return temp;
}

void printMatrix(matrix aMatrix){
    for(int i=0; i<aMatrix.m_lig; i++){
        for(int j=0; j<aMatrix.m_col; j++){
            std::cout << aMatrix.components[i][j] << '\t';
        }
        std::cout << std::endl;
    }
}

matrix multiplyMatrixs(matrix matrix1, matrix matrix2){
    matrix result;
    result.m_col = matrix2.m_col;
    result.m_lig = matrix1.m_lig;
    result.components = new float*[result.m_lig];
    for(int i=0; i<result.m_lig;i++){
        result.components[i] = new float[result.m_col];
    }

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

void destroyMatrix(matrix aMatrix){
    for(int i=0; i<aMatrix.m_lig; i++){
        delete[] aMatrix.components[i];
    }
    delete[] aMatrix.components;
}



