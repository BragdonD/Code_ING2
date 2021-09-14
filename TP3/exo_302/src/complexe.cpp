#include <iostream>
#include "complexe.h"
#include <cmath>

///constructor
Complex::Complex(): m_imgPart(0.0), m_realPart(0.0)
{}
Complex::Complex(float n_realPart, float n_imgPart): m_realPart(n_realPart), m_imgPart(n_imgPart)
{}
///fonction pour afficher la forme cartésienne d'un nombre complex
void Complex::printCartForm(){
    std::cout << "The cartesian form of this complex number is : " << m_realPart << " + i" << m_imgPart << std::endl;
}
///fonction pour afficher la forme polaire d'un nombre complex
void Complex::printPolForm(){
    std::cout << "The polar form of this complex is : " << calculModule() << "(cos(" << calculTeta() << ") + sin(" << calculTeta() <<"))" << std::endl;
}

float Complex::calculModule(){
    return std::sqrt(m_imgPart*m_imgPart + m_realPart*m_realPart);
}

void Complex::changeImgPart(float n_imgPart){
    m_imgPart = n_imgPart;
}

void Complex::changeRealPart(float n_realPart){
    m_realPart = n_realPart;
}

Complex Complex::calculConjugate(){
    Complex conjugate(m_realPart,-m_imgPart);
    return conjugate;    
}

float Complex::calculTeta(){
    return std::acos(m_realPart/calculModule());
}

Complex Complex::calculSum(Complex nb){
    Complex resSum(m_realPart+nb.getRealPart(),m_imgPart+nb.getImgPart());
    return resSum;
}

Complex Complex::calculProd(Complex nb){
    Complex resProd((m_realPart*nb.getRealPart() - m_imgPart*nb.getImgPart()), (m_realPart*nb.getImgPart() + m_imgPart*nb.getRealPart()));
    return resProd;
}
Complex Complex::calculProdScalaire(float real){
    Complex resProdScal(m_realPart*real,m_imgPart*real);
    return resProdScal;
}
int Complex::getRealPart(){
    return m_realPart;
}
int Complex::getImgPart(){
    return m_imgPart;
}