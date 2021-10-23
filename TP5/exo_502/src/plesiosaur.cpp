#include <iostream>
#include "dinosaur/plesiosaur.h"

plesiosaur::plesiosaur(){}
plesiosaur::plesiosaur(int _damages, int _speed, int _defense, int _x):dinosaur(_damages,_speed,_defense,coordinates(5,-5)){}
plesiosaur::~plesiosaur(){}

swim plesiosaur::getMovementsInWater(){return m_movementsInWater;}

walk plesiosaur::getMovementsOnGround(){return m_movementsOnGround;}

void plesiosaur::display(std::ostream& os){
    os << "PLESIOSAUR : " << std::endl;
}
