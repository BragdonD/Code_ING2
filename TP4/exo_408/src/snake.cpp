#include <iostream>
#include "snake.h"

snake::snake(){}
snake::~snake(){}
void snake::setPos(int X, int Y,int pos){
    m_bodyPos[pos][0] = X;
    m_bodyPos[pos][1] = Y;
}

int snake::getSize() const{
    return m_bodyPos.size();
}
int snake::getPosXOfPrecedentCase(int pos) const{
    if(pos-1>0 || pos<m_bodyPos.size())
        return m_bodyPos[pos][0];
    return -1;
}
int snake::getPosYOfPrecedentCase(int pos) const{
    if(pos-1>0 || pos<m_bodyPos.size())
        return m_bodyPos[pos][1];
    return -1;
}
void snake::grandir(){
    m_bodyPos.push_back({getPosXOfPrecedentCase(m_bodyPos.size()-1)+1, getPosYOfPrecedentCase(m_bodyPos.size()-1)+1});
}