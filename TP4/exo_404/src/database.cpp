#include <iostream>
#include "database.h"


database::database(){}

database::~database(){}

bool database::addNewLogin(std::string n_login, std::string n_password){
    std::pair<std::map<std::string, std::string>::iterator, bool> insertionResult = m_dataBase.insert({n_login,n_password});
    return insertionResult.second;
}

std::map <std::string , std::string> database::getDataBase() const{
    return m_dataBase;
}

std::string* database::getPasswordFromLogin(std::string login) const{
   
    if(getDataBase().find(login) != getDataBase().end()){
        auto iterator = getDataBase().find(login);
        return &(iterator->second);
    }
    else{
        return NULL;
    }
}

const std::string* database::getLoginFromPassword(std::string password) const{
    for(const auto &it : getDataBase()){
        if(it.second == password){
            return &(it.first);
        }
    }
    return NULL;
}

void database::printDataBase() const{
    for(const auto &it : getDataBase()){
        std::cout << it.first << ' / ' << it.second << std::endl;
    }
}

