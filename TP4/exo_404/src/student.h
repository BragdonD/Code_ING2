#ifndef __STUDENT_H__
#define __STUDENT_H__
#pragma once

#include <string>

class student
{
    private:
        std::string m_name;
        std::string m_id;
        int m_yearPromo;

    public:
        student(std::string n_name, std::string n_id, int n_yearPromo);
        student();
        ~student();
        void setName(std::string n_name);
        void setId(std::string n_id);
        void setPromo(int n_yearPromo);
        std::string getName();
        std::string getId();
        int getYearPromo();
};

#endif;