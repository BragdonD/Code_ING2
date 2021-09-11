#include <iostream>
#include "opeMatrix.h"


void menu();

int main(){
    int choice;
    matrix aMatrix;
    int matrixDim[2];

    std::cout << "A matrix of dimensions n*m" << std::endl;
    std::cout << "Type the dimension n :" << std::endl;
    matrixDim[0] = enterInteger();
    std::cout << "Type the dimension m :" << std::endl;
    matrixDim[1] = enterInteger();

    aMatrix = createMatrix(matrixDim[0],matrixDim[1]);
    fillMatrix(&aMatrix);

    do{
        menu();
        choice = enterInteger();
        switch(choice){
            case 1:
                printMatrix(aMatrix);
                break;
            case 2:
                std::cout << "The average of the matrix is : " << averageMatrix(aMatrix) << std::endl;
                break;
            case 3:
                float nbToSearch;
                std::cout << "Type the number for which it is necessary to calculate the number of occurrences : " << std::endl;
                nbToSearch = enterReal();
                std::cout << "The number of occurence of : " << nbToSearch << " into the matrix is : " << occurrenceIntoMatrix(aMatrix,nbToSearch) << " apearances." << std::endl;
                break;
            case 4:
                std::cout << "The pair matrix is :" << std::endl;
                printPairMatrix(aMatrix);
                break; 
        }
    }while(choice!=5);

    destroyMatrix(aMatrix);

    return 0;    
}

void menu(){
    std::cout << "Make a choice between the bellow propositions : " << std::endl;
    std::cout << "1. Print the matrix." << std::endl;
    std::cout << "2. Calculate the matrix's average." << std::endl;
    std::cout << "3. Count the number of occurence of a select number into the matrix." << std::endl;
    std::cout << "4. Print only the pair number of the matrix." << std::endl;
    std::cout << "5. Leave." << std::endl;
}