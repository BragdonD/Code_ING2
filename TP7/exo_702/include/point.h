#if !defined(POINT_H)
#define POINT_H

#include <utility>
#include <iostream>
#include "myexception.h"

class point
{
private:
    std::pair<double,double> m_coordinates;
public:
    point(std::pair<double,double>& _coord);
    ~point() throw();
    inline bool operator<(const std::pair<double,double>& _coord);
    inline bool operator>(const std::pair<double,double>& _coord);
};


#endif // POINT_H
