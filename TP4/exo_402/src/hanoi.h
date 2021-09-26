#ifndef __HANOI_H_
#define __HANOI_H_
#pragma once

#include <stack>

class hanoi
{
    private:
        int m_nbDisk;
        std::stack<int> m_towerA;
        std::stack<int> m_towerB;
        std::stack<int> m_towerC;
    public:
        hanoi(/* args */);
        hanoi(int n_disk);
        ~hanoi();
        void InitTowers();
        void setTowerA(int n_value, int action);
        void setTowerB(int n_value, int action);
        void setTowerC(int n_value, int action);
        bool setNbDisk(int n_nbDisk);
        int getTowerATopValue() const;
        int getTowerBTopValue() const;
        int getTowerCTopValue() const;
        std::stack<int> getTowerA() const;
        std::stack<int> getTowerB() const;
        std::stack<int> getTowerC() const;
        int getNbDisk() const;
        void printTowers();  
        void toh(int start, int aux, int end, int nbDisk);
        void mooveDisk(int start, int end);
};


#endif