#include <iostream>
#include <iterator>
#include "game.h"

game::game()
{
    for(int i = getMinSize(); i<getMaxSize(); i++){
        std::vector<personage> pers;
        m_playground.insert({i,pers});
    }
}

game::~game(){}

void game::AddPersToPos(int pos, const personage& pers){
    auto iterator = m_playground.find(pos);
    iterator->second.push_back(pers);
}

int game::getNbPersOnPos(int pos) const{
    for(const auto &it : getPlayground()){
        if(it.first == pos){
            int nb(0);
            for(const auto &position : it.second){
                nb++;
            }
            return nb;
        }
    }
    return 0;
}

int game::getNbPersTotal() const{
    int nbPers(0);
    for(int i = getMinSize(); i<getMaxSize(); i++){
        nbPers += getNbPersOnPos(i);
    }
    return nbPers;
}

std::map<int, std::vector<personage>> game::getPlayground() const{
    return m_playground;
}

int game::getMinSize() const{
    return m_minSize;
}

int game::getMaxSize() const{
    return m_maxSize;
}