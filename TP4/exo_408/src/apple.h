#ifndef __APPLE_H__
#define __APPLE_H__
#pragma once

class apple
{
    private:
        char m_cara = '@';
        int m_X;
        int m_Y;

    public:
        apple(){}
        apple(int n_X, int n_Y);
        ~apple();
        char getCara() const;
        int getX() const;
        int getY() const;
        void setX(int n_X);
        void setY(int n_Y);
};

#endif