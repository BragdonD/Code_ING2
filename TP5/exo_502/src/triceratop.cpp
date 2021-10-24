#include <iostream>
#include "dinosaur/triceratop.h"

triceratop::triceratop(){}
triceratop::triceratop(int _damages, int _speed, int _defense):dinosaur(_damages,_speed,_defense,coordinates(15,0)){}
triceratop::~triceratop(){}

walk* triceratop::getMovementsOnGround(){return m_movementsOnGround;}

void triceratop::display(std::ostream& os){
    os << "TRICERATOP : " << std::endl;
}