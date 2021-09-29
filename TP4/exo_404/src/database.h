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
};

database::database(/* args */)
{
}

database::~database()
{
}


#endif;