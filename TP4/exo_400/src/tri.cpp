#include <iostream>
#include <random>
#include <algorithm>
#include "tri.h"

void sort(std::vector<int> *tab){
    std::sort(tab->begin(), tab->end());
}

std::vector<int> randTab(int size, int highest, int lowest){
    std::random_device xrnd;
    std::default_random_engine el(xrnd());
    std::uniform_real_distribution<float>uniform_dist(lowest, highest);
    std::vector<int> randomTab;

    for(int i=0; i<size; i++){
        randomTab.push_back(uniform_dist(el));
    }
    
    return randomTab;
}

void printVectorTabInt(std::vector<int> tab){
    for(const auto &nb : tab){
        std::cout << nb << " / ";
    }
    std::cout << std::endl;
}