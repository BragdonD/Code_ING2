#include <iostream>
#include "dinosaur/ichtyosaur.h"
#include "dinosaur/triceratop.h"
#include "dinosaur/plesiosaur.h"
#include "dinosaur/pterodactil.h"
#include "dinosaur/velociraptor.h"

int main(){
    dinosaur *aTriceratop = new triceratop(5,1,15);

    std::cout << *aTriceratop << std::endl;


    delete aTriceratop;
    return 0;
}