#include <iostream>
#include "moove.h"

moove::moove(){}
moove::moove(int _plafond,int _minToMoove):m_plafond(_plafond), m_minToMoove(_minToMoove){}
moove::~moove(){}

int moove::getPlafond() const {return m_plafond;}
int moove::GetMinToMoove() const {return m_minToMoove;}

void moove::GoForward(int _speed, coordinates& _coord, int _max){
    if(_coord.getX()<_max){
        if(m_minToMoove>0){
            if(_coord.getX()>=m_minToMoove)
                _coord.setX(_coord.getX()+_speed);
            else
                std::cout << "The dinosaur cannot moove this way because it is not in this area." << std::endl;
        }
        else{
            if(_coord.getX()<=m_minToMoove)
                _coord.setX(_coord.getX()+_speed);
            else
                std::cout << "The dinosaur cannot moove this way because it is not in this area." << std::endl;
        }
    }
    else{
        std::cout << "The dinosaur is already at the area limit." << std::endl;
    }
    
}

void moove::GoBackward(int _speed, coordinates& _coord, int _min){
    if(_coord.getX()>_min){
        if(m_minToMoove>0){
            if(_coord.getX()>=m_minToMoove)
                _coord.setX(_coord.getX()-_speed);
            else
                std::cout << "The dinosaur cannot moove this way because it is not in this area." << std::endl;
        }
        else{
            if(_coord.getX()<=m_minToMoove)
                _coord.setX(_coord.getX()-_speed);
            else
                std::cout << "The dinosaur cannot moove this way because it is not in this area." << std::endl;
        }
    }
    else{
        std::cout << "The dinosaur is already at the area limit." << std::endl;
    }
}

void moove::GoUpward(int _speed, coordinates& _coord){
    if(_coord.getY()+_speed<getPlafond())
        _coord.setY(_coord.getY()+_speed);
    else
        std::cout << "The dinosaur is already at the area limit." << std::endl;
}

void moove::GoDownward(int _speed, coordinates& _coord){
    if(_coord.getY()-_speed<GetMinToMoove())
        _coord.setY(_coord.getY()-_speed);
    else
        std::cout << "The dinosaur is already at the area limit." << std::endl;
}