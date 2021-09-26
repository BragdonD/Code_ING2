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
        school(/* args */);
        ~school();
        void AddStudent(student* n_student);
        std::vector<student*> getAllStudent() const;
};




#endif