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

game::~game()
{
}

void game::MoovePers(const personage& pers, int position){
    int pos = findPosition(pers);
    if(pos == -1){
        std::cout << "The personage is not present in the game." << std::endl;
    }
    else{
        RemovePersFromPos(pos, pers);
        AddPersToPos(position, pers);
    }
}

void game::RemovePersFromPos(int pos, const personage& pers){
    auto iterator = getPlayground().find(pos);
    iterator->second.erase(pers);
}

void game::AddPersToPos(int pos, const personage& pers){
    auto iterator = getPlayground().find(pos);
    iterator->second.push_back(pers);
}

int game::findPosition(const personage& pers) const{
    for(const auto &it : getPlayground()){
        for(const auto &itPers : it.second){
            if(itPers.getName() == pers.getName()){
                return it.first;
            }
        }
    }
    return -1;
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