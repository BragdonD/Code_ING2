#include <iostream>
#include "compteur.h"

//constructor
counter::counter():m_value(0)
{}
counter::counter(int n_value):m_value(n_value)
{}

//modif
void counter::decrement(int n_incremt){
    setCounter(getValue() - n_incremt);
}
void counter::increment(int n_incremt){
    setCounter(getValue() + n_incremt);
}

void counter::setCounter(int n_value){
    m_value = n_value;
}

//getter
int counter::getValue() const{
    return m_value;
}