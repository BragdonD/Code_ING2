#ifndef COORDINATES_H
#define COORDINATES_H

#include <iostream>

class coordinates
{
    private:
        int m_x;
        int m_y;
    public:
        coordinates();
        coordinates(int _x, int _y);
        ~coordinates();
        void setX(int _x);
        void setY(int _y);
        int getX() const;
        int getY() const;
        friend std::ostream& operator<<(std::ostream& os, const coordinates& _coord);
};

#endif
