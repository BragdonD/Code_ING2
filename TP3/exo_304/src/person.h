#ifndef __PERSON_H__
#define __PERSON_H__
#pragma once

#include <cstring>

class person{
    private:
        std::string m_firstName;
        std::string m_lastName;
        std::string m_sex;
        int m_dayOfBirth;
        int m_monthOfBirth;
        int m_yearOfBirth;
        person *m_pPartner;

    public:
        person();
        person(std::string n_fName, std::string n_LName, std::string n_sex, int n_dayBirth, int n_monthBirth, int n_yearBirth, person *n_person);
        ~person();
        void setFirstName(std::string n_firstName);
        void setLastName(std::string n_lastName);
        bool setSex(std::string n_sex);
        void setBirthday(int n_day, int n_month, int n_year);
        void setPartner(person *n_person = NULL);
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getSex() const;
        person* getPartner() const;
        int getYearOfBirth() const;
        int getMonthOfBirth() const;
        int getDayOfBirth() const;
        void Divorce();
        void Marry(person* n_person);
        void Printinfo()const;
};

#endif
