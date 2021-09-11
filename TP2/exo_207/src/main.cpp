#include <iostream>
#include "entete.h"
#include "produit_matricielle.h"

int main(){
    std::srand(std::time(NULL));
    int sizeMatA[2], sizeMatB[2];
    matrix matrixA, matrixB, result;

    std::cout << "Write the size of the matrix A(n*m) : " << std::endl;
    std::cout << "Write the n component : " << std::endl;
    sizeMatA[0] = enterInteger();
    std::cout << "Write the m component : " << std::endl;
    sizeMatA[1] = enterInteger();

    std::cout << "Write the size of the vector B(p*1) : " << std::endl;
    std::cout << "Write the p component : " << std::endl;
    sizeMatB[0] = enterInteger();
    sizeMatB[1] = 1;

    matrixA = createMatrix(sizeMatA[0],sizeMatA[1]);
    matrixB = createMatrix(sizeMatB[0]);

    if(sizeMatA[1]!=sizeMatB[0]){
        std::cout << "Error matrix size do not match : " << std::endl;
        std::cout << "Imposible to calculate.";
    }
    else
    {
        std::cout << "A matrix :" << std::endl;
        printMatrix(matrixA);
        std::cout << "B matrix :" << std::endl;
        printMatrix(matrixB);
        result = multiplyMatrixs(matrixA,matrixB);
        printMatrix(result);
        destroyMatrix(result);
    }

    destroyMatrix(matrixA);
    destroyMatrix(matrixB);

    return 0;
}