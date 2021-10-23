#include <iostream>
#include "dinosaur/ichtyosaur.h"

ichtyosaur::ichtyosaur(){}
ichtyosaur::ichtyosaur(int _damages, int _speed, int _defense, int _x):dinosaur(_damages,_speed,_defense,coordinates(5,-5)){}
ichtyosaur::~ichtyosaur(){}

swim ichtyosaur::getMovements(){return m_movements;}

void ichtyosaur::display(std::ostream& os){
    os << "ICHTYOSAUR : " << std::endl;
}