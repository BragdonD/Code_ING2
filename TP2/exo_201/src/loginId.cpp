#include <iostream>
#include "loginId.h"

loginId::loginId(std::string newPassword, std::string newLogin) : password(newPassword),login(newLogin){
}

bool loginId::compareInput(std::string passwordWrited, std::string loginWrited){
    return (password == passwordWrited && login == loginWrited);
}