#include <iostream>
#include "hanoi.h"

hanoi::hanoi(): m_nbDisk(0)
{}

hanoi::hanoi(int n_disk): m_nbDisk(n_disk)
{}

hanoi::~hanoi(){}

void hanoi::InitTowers(){
    for(int i=0; i<getNbDisk(); i++){
        setTowerA(getNbDisk()-1-i, 1);
    }
}

void hanoi::setTowerA(int n_value, int action){
    //action = 1 add
    //         -1 remove
    if(action == 1){
        m_towerA.push(n_value);
    }
    else{
        if(getTowerA().size()>0)
            m_towerA.pop();
    }
}

void hanoi::setTowerB(int n_value, int action){
    //action = 1 add
    //         -1 remove
    if(action == 1){
        m_towerB.push(n_value);
    }
    else{
        if(getTowerB().size()>0)
            m_towerB.pop();
    }
}

void hanoi::setTowerC(int n_value, int action){
    //action = 1 add
    //         -1 remove
    if(action == 1){
        m_towerC.push(n_value);
    }
    else{
        if(getTowerC().size()>0)
            m_towerC.pop();
    }
}

bool hanoi::setNbDisk(int n_nbDisk){
    if(n_nbDisk > 0){
        m_nbDisk = n_nbDisk;
        return true;
    }
    else{
        return false;
    }
}

int hanoi::getTowerATopValue() const{
    if(getTowerA().size()>0)
        return m_towerA.top();
    else 
        return -1;
}

int hanoi::getTowerBTopValue() const{
    if(getTowerB().size()>0)
        return m_towerB.top();
    else 
        return -1;
}

int hanoi::getTowerCTopValue() const{
    if(getTowerC().size()>0)
        return m_towerC.top();
    else 
        return -1;
}

void hanoi::printTowers(){
    int sizeA = getTowerA().size();
    int sizeB = getTowerB().size();
    int sizeC = getTowerC().size();

    for(int i = 0; i < getNbDisk(); i++){
        if(sizeA<getNbDisk()-i)
            std::cout << ".\t";
        else{
            std::cout << getTowerATopValue()<< "\t";
            setTowerA(0,-1);
        }
        if(sizeB<getNbDisk()-i)
            std::cout << ".\t";
        else{
            std::cout << getTowerBTopValue()<< "\t";
            setTowerB(0,-1);
        }
        if(sizeC<getNbDisk()-i)
            std::cout << ".\t";
        else{
            std::cout << getTowerCTopValue()<< "\t";
            setTowerC(0,-1);
        }
        std::cout << std::endl;
            
    }
}

int hanoi::getNbDisk() const{
    return m_nbDisk;
}

std::stack<int> hanoi::getTowerA() const{
    return m_towerA;
}

std::stack<int> hanoi::getTowerB() const{
    return m_towerB;
}

std::stack<int> hanoi::getTowerC() const{
    return m_towerC;
}

void hanoi::toh(int start, int aux, int end, int nbDisk){
    if(nbDisk>0){
        
        toh(start,end,aux, nbDisk-1);
        std::cout << "tower A top value : " << getTowerATopValue() << std::endl;
        std::cout << "tower B top value : " << getTowerBTopValue() << std::endl;
        std::cout << "tower C top value : " << getTowerCTopValue() << std::endl<< std::endl<< std::endl;
        mooveDisk(start,end);
        toh(aux,start,end,nbDisk-1);
    }
}

void hanoi::mooveDisk(int start, int end){
    int value;
    switch (start)
    {
    case 0:
        value = getTowerATopValue();
        setTowerA(0,-1);
        break;
    case 1:
        value = getTowerBTopValue();
        setTowerB(0,-1);
        break;

    case 2:
        value = getTowerCTopValue();
        setTowerC(0,-1);
        break;
    }

    switch (end)
    {
    case 0:
        setTowerA(value,1);
        break;
    case 1:
        setTowerB(value,1);
        break;

    case 2:
        setTowerC(value,1);
        break;
    }
}