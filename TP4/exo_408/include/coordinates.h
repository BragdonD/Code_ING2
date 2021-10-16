#ifndef __COORDINATES_H__
#define __COORDINATES_H__
#pragma once

struct coordinates
{
    //attributes
    int x, y;
    //functions
    void operator()(int _x, int _y){
        x = _x;
        y = _y;
    }
    int operator[](int index) const{
        return (index == 0 ? x: index == 1 ? y:-1);
    }

    friend inline bool operator==(const coordinates& _1, const coordinates& _2){
        if(_1.x == _2.x && _1.y == _2.y){
            return true;
        }
        else
            return false;
    }
};

#endif