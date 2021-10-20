#ifndef __SCHOOL_H__
#define __SCHOOL_H__
#pragma once

#include <vector>
#include "student.h"

class school
{
    private:
       std::vector<student*> m_pTabStudent;
    public:
        school();
        ~school();
        void AddStudent(student* n_student);
        std::vector<student*> getAllStudent() const;
        void printStudent() const;
};


#endif