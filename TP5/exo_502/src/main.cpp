#include <iostream>
#include "dinosaur/ichtyosaur.h"
#include "dinosaur/triceratop.h"
#include "dinosaur/plesiosaur.h"
#include "dinosaur/pterodactil.h"
#include "dinosaur/velociraptor.h"

int main(){
    dinosaur *aTriceratop = new triceratop(3,1,15);
    dinosaur *anIchtyosaure = new ichtyosaur(15,2,5);
    dinosaur *aPterodactile = new pterodactil(5,3,2);
    dinosaur *aVelociraptor = new velociraptor(10,2,0);
    dinosaur *aPlesiosaure = new plesiosaur(5,1,10);

    std::cout << *aTriceratop << std::endl;
    std::cout << *anIchtyosaure << std::endl;
    std::cout << *aPlesiosaure << std::endl;
    std::cout << *aVelociraptor << std::endl;
    std::cout << *aPterodactile << std::endl;


    delete aTriceratop;
    delete anIchtyosaure;
    delete aPlesiosaure;
    delete aVelociraptor;
    delete aPterodactile;

    return 0;
}