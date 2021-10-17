#ifndef __SNAKE_H__
#define __SNAKE_H__
#pragma once

#include <vector>
#include <string>
#include "coordinates.h"

class snake
{
    private:
        std::vector<coordinates> m_body;
        int m_size = 0;
        std::string m_direction = "left";
        char m_cara = '*';
        
    public:
        snake();
        ~snake();
        void setBody(const coordinates& _begin); //call at the beginning
        void setDirection(const std::string& _new);
        void mooveBody(const std::string& _moove);
        int getSize() const;
        char getCara() const;
        std::string getDirection() const;
        std::vector<coordinates> getBody() const;
        coordinates getBodyPos(int _pos) const;
        void Grow();
};

bool testDirection(const std::string& _old, const std::string& _new);

#endif