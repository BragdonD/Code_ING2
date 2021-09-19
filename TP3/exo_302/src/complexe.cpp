#include <iostream>
#include "complexe.h"
#include <cmath>

///constructor
Complex::Complex(): m_realPart(0.0), m_imgPart(0.0)
{}
Complex::Complex(float n_realPart, float n_imgPart): m_realPart(n_realPart), m_imgPart(n_imgPart)
{}
///fonction pour afficher la forme cartésienne d'un nombre complex
void Complex::printCartForm() const{
    std::cout << "The cartesian form of this complex number is : " << getRealPart() << " + i" << getImgPart() << std::endl;
}
///fonction pour afficher la forme polaire d'un nombre complex
void Complex::printPolForm() const{
    std::cout << "The polar form of this complex is : " << calculModule() << "(cos(" << calculTeta() << ") + sin(" << calculTeta() <<"))" << std::endl;
}

float Complex::calculModule() const{
    return std::sqrt(getImgPart()*getImgPart() + getRealPart()*getRealPart());
}

void Complex::setImgPart(float n_imgPart){
    m_imgPart = n_imgPart;
}

void Complex::setRealPart(float n_realPart){
    m_realPart = n_realPart;
}

Complex Complex::calculConjugate() const{
    Complex conjugate(getRealPart(),-getImgPart());
    return conjugate;    
}

float Complex::calculTeta() const{
    return std::acos(getRealPart()/calculModule());
}

Complex Complex::calculSum(Complex nb) const{
    Complex resSum(getRealPart()+nb.getRealPart(),getImgPart()+nb.getImgPart());
    return resSum;
}

Complex Complex::calculProd(Complex nb) const{
    Complex resProd((getRealPart()*nb.getRealPart() - getImgPart()*nb.getImgPart()), (getRealPart()*nb.getImgPart() + getImgPart()*nb.getRealPart()));
    return resProd;
}
Complex Complex::calculProdScalaire(float real) const{
    Complex resProdScal(getRealPart()*real,getImgPart()*real);
    return resProdScal;
}
float Complex::getRealPart() const{
    return m_realPart;
}
float Complex::getImgPart() const{
    return m_imgPart;
}

void Complex::printInformation() const{
    printCartForm();
    printPolForm();

    std::cout << "its module is : " << calculModule() << std::endl;
    std::cout << "its argument is : " << calculTeta() << std::endl;
}