#include <iostream>
#include "snake.h"

snake::snake(){}
snake::~snake(){}
void snake::setDirection(const std::string& _new){m_direction = _new;}
int snake::getSize() const{return m_size;}
char snake::getCara() const{return m_cara;}
std::string snake::getDirection() const{return m_direction;}
std::vector<coordinates> snake::getBody() const{return m_body;}
coordinates snake::getBodyPos(int _pos) const{return m_body[_pos];}


void snake::setBody(const coordinates& _begin){
    m_body.push_back(_begin);
    m_size += 1;
}

void snake::mooveBody(const std::string& _moove){
    for(int i=getSize()-1; i>0; i--){
        m_body[i](getBodyPos(i-1)[0],getBodyPos(i-1)[1]);
    }
    if(testDirection(getDirection(), _moove)){
        m_direction = _moove;
        if(_moove == "left"){
            m_body[0](getBodyPos(0)[0]-1, getBodyPos(0)[1]);
        }
        else if(_moove == "right"){
            m_body[0](getBodyPos(0)[0]+1, getBodyPos(0)[1]);
        }
        else if(_moove == "up"){
            m_body[0](getBodyPos(0)[0], getBodyPos(0)[1]-1);
        }
        else{
            m_body[0](getBodyPos(0)[0], getBodyPos(0)[1]+1);
        }
    }
}

void snake::Grow(){
    setBody(getBody()[getBody().size()-1]);
}

bool testDirection(const std::string& _old, const std::string& _new){
    if(_old == "right" && _new == "left"){
        return false;
    }
    else if(_old == "left" && _new == "right"){
        return false;
    }
    else if(_old == "up" && _new == "down"){
        return false;
    } 
    else if(_old == "down" && _new == "up"){
        return false;
    }  
    else{
        return true;
    }
}