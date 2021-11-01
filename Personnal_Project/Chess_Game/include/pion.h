#ifndef PION_H
#define PION_H

#include <SFML/Graphics/Sprite.hpp>

namespace Chess{
    class pion
    {
        private:
            enum Value {None = 0, Pawn, Rook, Knight, Bishop, Queen, King, White, Black};
            std::pair<Value,Value> m_value;
        public:
            pion();
            ~pion();
            void setValue(Value Color, Value Rank);
            std::pair<Value,Value> getValue();
    };
}

#endif