#ifndef __POINT_H__
#define __POINT_H__
#pragma once

class point
{
    private:
        float m_x;
        float m_y;
    public:
        point();
        point(float n_x, float n_y);
        ~point();
        float getX() const;
        float getY() const;
        void setX(float n_x);
        void setY(float n_y);    
};

#endif