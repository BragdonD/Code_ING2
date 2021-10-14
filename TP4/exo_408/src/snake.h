#ifndef __SNAKE_H__
#define __SNAKE_H__
#pragma once

#include <vector>

class snake
{
    private:
        std::vector<int[2]> m_bodyPos;
        int m_size = 0;
        int m_cara = '*';
    public:
        snake();
        ~snake();
        void setPos(int X, int Y, int pos);
        int getSize() const;
        int getPosXOfPrecedentCase(int pos) const;
        int getPosYOfPrecedentCase(int pos) const;
        void grandir();
};




#endif