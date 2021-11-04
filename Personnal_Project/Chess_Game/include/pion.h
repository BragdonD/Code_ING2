#ifndef PION_H
#define PION_H

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Sprite.hpp>

namespace Chess{
    class pion
    {
        protected:
            enum Value {None = 0, Pawn, Rook, Knight, Bishop, Queen, King, White, Black};
            std::pair<Value,Value> m_value;
            std::pair<int,int> m_position;
        public:
            pion();
            virtual ~pion();
            void setValue(Value Color, Value Rank);
            void setPosition(std::pair<int,int> position);
            std::pair<Value,Value> getValue();
            virtual void displayOnWindow(sf::RenderWindow& window) = 0;
            virtual void ProposeMoove() = 0;
    };
}

#endif