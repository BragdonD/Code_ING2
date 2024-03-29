#ifndef __GAME_H__
#define __GAME_H__
#pragma once

#include <map>
#include <vector>
#include "personage.h"

class game
{
    private:
        std::map<int, std::vector<personage>> m_playground;
        int m_maxSize = 200;
        int m_minSize = 0;
    public:
        game();
        ~game();
        int getNbPersOnPos(int pos) const;
        void getNamePersOnPos(int pos) const;
        int getNbPersTotal() const;
        int getMaxSize() const;
        int getMinSize() const;
        std::map<int, std::vector<personage>> getPlayground() const;
        void AddPersToPos(int pos, const personage& pers);
};



#endif