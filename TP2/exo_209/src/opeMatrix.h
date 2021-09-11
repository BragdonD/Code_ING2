#ifndef OPEMATRIX_H__
#define OPEMATRIX_H__

#include <cmath>
#include "entete.h"
#include "produit_matricielle.h"

float averageMatrix(matrix aMatrix);
int occurrenceIntoMatrix(matrix aMatrix, float nbToSearch);
void printPairMatrix(matrix aMatrix);
void fillMatrix(matrix* aMatrix);

#endif