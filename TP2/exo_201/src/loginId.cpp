#include <iostream>
#include "loginId.h"

///Constructeur de la classe loginId
loginId::loginId(std::string newPassword, std::string newLogin) : password(newPassword),login(newLogin){
}

///Methode de vérification de la classe loginId
///Permet de verifier si le mot de passe et l'id saisies correspondent bien à ceux enregistré
///Renvoi un boolean en reponse : 
    /// true si correct
    /// false si faux
bool loginId::compareInput(std::string passwordWrited, std::string loginWrited){
    return (password == passwordWrited && login == loginWrited);
}