#ifndef __FILE_H__
#define __FILE_H__
#pragma once

#include <string>

class file
{
    private:
        std::string m_id;
        std::string m_name;
    public:
        file(/* args */);
        file(std::string n_name, std::string n_id);
        ~file();
        std::string getName() const;
        std::string getId() const;
        void setName(std::string n_name);
        void setId(std::string n_id);
        void printFile() const;
};


#endif