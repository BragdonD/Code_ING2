#include <iostream>
#include "compteur.h"

//constructor
counter::counter():m_value(0)
{}
counter::counter(int n_value):m_value(n_value)
{}

//modif
void counter::decrement(int n_incremt){
    m_value-=n_incremt;
}
void counter::increment(int n_incremt){
    m_value+=n_incremt;
}

//getter
int counter::getValue(){
    return m_value;
}