#include "entete.h"

///Sous programme de saisie d'un entier
///Permet le blindage de la saisie
int enterInteger(){
    ///Declarations des variables nécessaires au traitements
    int integer;
    bool error(false);
    ///boucle de traitement s'effectuant tant que l'utilisateur n'entrera pas un entier comme entrée
    do{
        error = false;
        std::cout << "Type an integer : " << std::endl;
        std::cin >> integer;
        ///En cas d'erreur de saisie
        if(std::cin.fail()){
            error = true;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }while(error);
    //Validation de l'input
    std::cout << "You have typed a corrected input" << std::endl;
    return integer;
}

///Sous programme de saisie d'un reel
///Permet le blindage de la saisie
float enterReal(){
    ///Declarations des variables nécessaires au traitements
    float real;
    bool error(false);
    ///boucle de traitement s'effectuant tant que l'utilisateur n'entrera pas un entier comme entrée
    do{
        error = false;
        std::cout << "Type a real : " << std::endl;
        std::cin >> real;
        ///En cas d'erreur de saisie
        if(std::cin.fail()){
            error = true;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }while(error);
    //Validation de l'input
    std::cout << "You have typed a correct input" << std::endl;
    return real;
}

///Fonctions calculant la valeur moyenne d'une suite de reels passée en paramètre
///On lui passe également la taille de l'array de reels 
///retourne la valeur calculée
float calculateAverage(float *reals, int size){
    ///declaration et initialisations des variables
    float average(0.0);
    ///additions des reels
    for(int i=0; i<size;i++){
        average += reals[i];
    }
    ///retour de la valeur calculé divisé par le nombre pour obtenir la valeur moyenne
    return average/size;
}