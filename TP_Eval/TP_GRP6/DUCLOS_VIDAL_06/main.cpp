#include <iostream>
#include <ctime>
#include "vaisseau.h"

int main()
{
    std::srand(std::time(NULL));
    int alea;
    int alea2;
    int nbP=0;

    std::cout << "Saisir nb pirates souhaites : "<< std::endl;
    std::cin >> nbP;

    //Creation des trois pirates
    Pirate J("Jack Sparrow","Captain",32,32,NULL);
    Pirate W("Will Turner","Captain",32,32,NULL);
    Pirate D("Davy Jones","Captain",32,32,NULL);

    //genrerer n pirates
    alea=std::rand()%120+3;
    alea2=std::rand()%10000+1;

    //creation des vaisseaux
    Vaisseau T("Tortuga",0,2003,0,100000,0);
    Vaisseau BlackPearl("Black Pearl",24,1998,3,120,alea);
    Vaisseau HollandaisVolant("Hollandais Volant",0,1998,1,10000,alea2);

    //Ajout de jack et Will et David sur les vaisseaux
    BlackPearl.AddMemberToEquipage(J);
    BlackPearl.AddMemberToEquipage(W);

    HollandaisVolant.AddMemberToEquipage(D);

    ///Creation des 100 pirates
    for(int i=0; i<100; i++){
        Pirate toAdd("vide","vide",0,0, &BlackPearl);
        BlackPearl.AddMemberToEquipage(toAdd);
    }

    ///test si le BlackPear peut quitter le port
    if(BlackPearl.QuitterPort()){
        std::cout << BlackPearl.getNom() << " peut partir" << std::endl;
    }
    else{
        std::cout << BlackPearl.getNom() << " ne peut pas partir" << std::endl;
    }
    ///Affichage de l'equipage du blackPearl
    BlackPearl.afficherEquipage();

    //Affichage de la phrase de jack
    std::cout << "C'est Jack qui m'envoi payer sa dette" << std::endl;

    ///transfert de l'equipage
    std::vector<Pirate> temp = BlackPearl.getEquipage();
    for(int i=0; i< temp.size(); i++){
        temp[i].setPosition(&HollandaisVolant);
        HollandaisVolant.AddMemberToEquipage(temp[i]);
    }

    ///Affichage des positions des personnages
    std::cout << "jack Position : " << J.getPosition()->getNom() << std::endl;
    std::cout << "david Jones : " << D.getPosition()->getNom() << std::endl;
    std::cout << "Turner WIll " << W.getPosition()->getNom() << std::endl;

    BlackPearl.afficherEquipage();
    HollandaisVolant.afficherEquipage();

    return 0;
}
