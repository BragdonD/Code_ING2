#include <iostream>
#include "point.h"

point::point(std::pair<double,double>& _coord)
{
    const std::pair<double,double> superiorBorn = {1.0, 1.0};
    const std::pair<double,double> inferiorBorn = {0.0, 0.0};

    try{
        if(_coord > superiorBorn){
            throw PointException();
        }
        else if(_coord < inferiorBorn){
            throw PointException();
        }
        else{
            m_coordinates = _coord;
        }
    }
    catch(PointException& e){
        std::cout << e.what() << std::endl;
    }

}

point::~point()
{
}

inline bool point::operator<(const std::pair<double,double>& _coord){
    if(m_coordinates.first < _coord.first  ||  m_coordinates.second < _coord.second)
        return true;
    else    
        return false;
}

inline bool point::operator>(const std::pair<double,double>& _coord){
    if(m_coordinates.first > _coord.first  ||  m_coordinates.second > _coord.second)
        return true;
    else    
        return false;
}