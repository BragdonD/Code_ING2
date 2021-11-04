#ifndef PAWN_H
#define PAWN_H

#include "pion.h"

namespace Chess{
    class pawn : public pion
    {
        private:
            bool m_firstMoove = false;
            std::vector<int> m_mooveAvailable();
        public:
            pawn();
            ~pawn();
            void setFirstMoove(bool value = true);
            bool getFirstMoove();
            void displayOnWindow(sf::RenderWindow& window);
            void ProposeMoove();
    };    
}

#endif