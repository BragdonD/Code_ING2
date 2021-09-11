#include <iostream>
#include "opeMatrix.h"


float averageMatrix(matrix aMatrix){
    float result(0.0);

    for(int i=0; i<aMatrix.m_lig; i++){
        for(int j=0; j<aMatrix.m_col; j++){
            result += aMatrix.components[i][j];
        }
    }

    return result/(aMatrix.m_col*aMatrix.m_lig);
}

int occurrenceIntoMatrix(matrix aMatrix, float nbToSearch){
    int count(0);

    for(int i=0; i<aMatrix.m_lig; i++){
        for(int j=0; j<aMatrix.m_col; j++){
            if(aMatrix.components[i][j] == nbToSearch){
                count++;
            }
        }
    }
    return count;
}

void printPairMatrix(matrix aMatrix){
    for(int i=0; i<aMatrix.m_lig; i++){
        for(int j=0; j<aMatrix.m_col; j++){
            if((std::fmod(aMatrix.components[i][j],2.0)) == 0){
                std::cout << aMatrix.components[i][j] << '\t';
            }                
            else{
                std::cout << 'X' << '\t';
            }
        }
        std::cout << std::endl;
    }
}

void fillMatrix(matrix* aMatrix){
    for(int i=0; i<aMatrix->m_lig; i++){
        for(int j=0; j<aMatrix->m_col; j++){
           std::cout << "Type the number for the case (" << i << ',' << j  << ") : " << std::endl;
           aMatrix->components[i][j] = enterReal();
        }
    }
}