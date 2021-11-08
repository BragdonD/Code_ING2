#ifndef FUNCTION_H
#define FUNCTION_H

#include <iostream>
#include <vector>
#include <string>

template<typename T> class Vector;  
template<typename T> std::ostream& operator<< (std::ostream& o, const Vector <T>& x);

template<typename T> 
class Vector;

template<typename T> 
class Vector
{
private:
    std::vector<T> m_elements;
    T m_sum;
public:
    Vector(){}
    Vector(std::vector<T> _elements): m_elements(_elements){}

    ~Vector(){}
    std::vector<T> getElements()const {return m_elements;}
    void sum();
    friend std::ostream& operator<< <>(std::ostream& os, const Vector<T>& classObj);
};

template<typename T>
void Vector<T>::sum(){
    m_sum = 0;
    for(unsigned int i = 0; i < m_elements.size(); i++){
        m_sum += m_elements[i];
    }
}

template<>
void Vector<std::string>::sum(){
    m_sum = "";
    for(unsigned int i = 0; i < m_elements.size(); i++){
        m_sum += m_elements[i];
    }
}

template<typename T>
std::ostream& operator<<(std::ostream& os, const Vector<T>& classObj)
{
    for(const auto& it : classObj.getElements()){
        os << it << " ";
    }
    os << std::endl;
    os << "Sum = " << classObj.m_sum;
    os << std::endl;
    os << std::endl;
    return os;
}

#endif