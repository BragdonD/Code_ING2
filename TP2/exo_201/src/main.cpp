#include <iostream>
#include "loginId.h"

int main(){
    ///creation d'une variable loginID avec des valeurs pré-choisie
    loginId Registre("1234","ThomasD");
    ///declarations des variables permettant de recuperer les inputs utilisateurs
    std::string loginWrited, passwordWrited;
    bool test;///booleen de test
    do{
        ///Saisie des données par l'utilisateur
        std::cout << "Write your login id : " << std::endl;
        std::cin >> loginWrited;
        std::cout << "Write your password : " << std::endl;
        std::cin >> passwordWrited;
        ///Appel de la méthode permettant de vérifier si les inputs correspondent bien à ceux enregistrés
        test = Registre.compareInput(passwordWrited,loginWrited);
        ///En cas d'erreur
        if(test!=true){
            std::cout << "You have entered a wrong password" << std::endl;
        }
    }while(test!=true);
    ///En cas de succès
    std::cout << "You succeed to connect" << std::endl;
    return 0;
}
