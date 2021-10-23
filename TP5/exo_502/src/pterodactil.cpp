#include <iostream>
#include "dinosaur/pterodactil.h"

pterodactil::pterodactil(){}
pterodactil::pterodactil(int _damages, int _speed, int _defense):dinosaur(_damages,_speed,_defense,coordinates(0,5)){}
pterodactil::~pterodactil(){}
fly* pterodactil::getMovementsInAir(){return m_movementsInAir;}

void pterodactil::display(std::ostream& os){
    os << "PTERODACTIL : " << std::endl;
}