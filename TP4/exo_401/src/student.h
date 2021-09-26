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
        //contructor
        student(std::string n_name, std::string n_id, int n_yearPromo);
        student();
        ~student();
        //seter
        void setName(std::string n_name);
        void setId(std::string n_id);
        void setPromo(int n_yearPromo);
        //geter
        std::string getName() const;
        std::string getId() const;
        int getYearPromo() const;
        //others
        void printInfo() const;
};

#endif;