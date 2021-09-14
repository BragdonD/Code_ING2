#ifndef __COMPLEXE_H__
#define __COMPLEXE_H__

class Complex{
    public:
    Complex();
    Complex(float n_realPart, float n_imgPart);
    void printCartForm();
    void printPolForm();
    float calculModule();
    float calculTeta();
    Complex calculConjugate();
    Complex calculSum(Complex nb);
    Complex calculProd(Complex nb);
    Complex calculProdScalaire(float real);
    void changeImgPart(float n_imgPart);
    void changeRealPart(float n_realPart);
    int getRealPart();
    int getImgPart();

    private:
    float m_realPart;
    float m_imgPart;
};

#endif