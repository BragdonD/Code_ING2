#include <iostream>
#include "dinosaur/velociraptor.h"

velociraptor::velociraptor(){}
velociraptor::velociraptor(int _damages, int _speed, int _defense):dinosaur(_damages,_speed,_defense,coordinates(15,0)){}
velociraptor::~velociraptor(){}

walk* velociraptor::getMovements(){return m_movements;}

void velociraptor::display(std::ostream& os){
    os << "VELOCIRAPTOR : " << std::endl;
}