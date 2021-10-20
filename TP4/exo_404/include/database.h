#ifndef __DATABASE_H__
#define __DATABASE_H__
#pragma once

#include <string>
#include <map>

class database
{
    private:
        std::map <std::string , std::string> m_dataBase;
    public:
        database(/* args */);
        ~database();
        bool addNewLogin(std::string n_login, std::string n_password);
        std::map <std::string , std::string> getDataBase() const;
        std::string getPasswordFromLogin(std::string login) const;
        void printDataBase() const;
};

#endif