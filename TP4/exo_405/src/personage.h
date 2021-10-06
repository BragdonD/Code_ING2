#ifndef __PERSONAGE_H__
#define __PERSONAGE_H__
#pragma once

#include <string>

class personage
{
    private:
        std::string m_name;
    public:
        personage();
        personage(std::string n_name);
        ~personage();
        void SetName(std::string n_name);
        std::string getName() const;
};


#endif