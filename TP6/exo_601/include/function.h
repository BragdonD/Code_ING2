#ifndef FUNCTION_H
#define FUNCTION_H

#include <iostream>
#include <vector>

template<typename T> class Vector;  // pre-declare the template class itself
template<typename T> std::ostream& operator<< (std::ostream& o, const Vector <T>& x);

template<typename T> 
class Vector;

template<typename T> 
class Vector
{
private:
    std::vector<T> m_elements;
public:
    Vector(){}
    Vector(std::vector<T> _elements): m_elements(_elements){}

    ~Vector(){}
    std::vector<T> getElements()const {return m_elements;}
    void sort();
    friend std::ostream& operator<< <>(std::ostream& os, const Vector<T>& classObj);
};

template<typename T>
void Vector<T>::sort(){
    for(unsigned int i = 0; i < m_elements.size() -1; i++){
        for(unsigned int j = 0; j < m_elements.size() - 1; j++){
            if(m_elements[j] < m_elements[j+1]){
                int temp = m_elements[j];
                m_elements[j] = m_elements[j+1];
                m_elements[j + 1] = temp;
            }
        }
    }
}

template<typename T>
std::ostream& operator<<(std::ostream& os, const Vector<T>& classObj)
{
    for(const auto& it : classObj.getElements()){
        os << it << " , ";
    }
    os << std::endl;
    return os;
}

#endif