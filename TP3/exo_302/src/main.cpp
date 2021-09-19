#include <stdio.h>
#include "complexe.h"
#include "entete.h"

int main(){
    Complex myComplex, Conjugate, Scalar, Sum, Prod;
    float realPart, imgPart, prodScalar;

    std::cout << "Write the real part of the complex : " << std::endl;
    realPart = enterReal();
    std::cout << "Write the imaginary part of the complex : " << std::endl;
    imgPart = enterReal();
    
    myComplex.setImgPart(imgPart);
    myComplex.setRealPart(realPart);

    std::cout << "Complex typed : " << std::endl << std::endl;
    myComplex.printInformation();

    std::cout << "Write a number to do a scalar product : " << std::endl;
    prodScalar = enterReal();
    Scalar = myComplex.calculProdScalaire(prodScalar);
    std::cout << "Produit Scalar of the Complex typed : " << std::endl << std::endl;
    Scalar.printInformation();

    Conjugate = myComplex.calculConjugate();
    std::cout << "Complex typed's Conjugate: " << std::endl << std::endl;
    Conjugate.printInformation();

    Sum = myComplex.calculSum(Scalar);
    std::cout << "Sum between the scalar and the complex typed : " << std::endl << std::endl;
    Sum.printInformation();

    Prod = myComplex.calculProd(Scalar);
    std::cout << "Prod between the scalar and the complex typed : " << std::endl << std::endl;
    Scalar.printInformation();

    return 0;
}