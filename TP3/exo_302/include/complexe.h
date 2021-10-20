#ifndef __COMPLEXE_H__
#define __COMPLEXE_H__
#pragma once

class Complex{
    private:
        float m_realPart;
        float m_imgPart;

    public:
        Complex();
        Complex(float n_realPart, float n_imgPart);
        void printCartForm() const;
        void printPolForm() const;
        float calculModule() const;
        float calculTeta() const;
        Complex calculConjugate() const;
        Complex calculSum(Complex nb) const;
        Complex calculProd(Complex nb) const;
        Complex calculProdScalaire(float real) const;
        void setImgPart(float n_imgPart);
        void setRealPart(float n_realPart);
        float getRealPart() const;
        float getImgPart() const;
        void printInformation() const;
};

#endif