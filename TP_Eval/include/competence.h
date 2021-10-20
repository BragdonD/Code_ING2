#ifndef __COMPETENCE_H__
#define __COMPETENCE_H__

#include <string>

class competence
{
private:
    int m_nb;
    std::string m_dateCertif;
public:
    competence();
    competence(int _nb);
    ~competence();
    void setCompetence(int _nb);
    void setDateObtention(std::string _date);
    std::string getDateObtention() const;
    std::string getCompetence() const;
};

competence::competence(){}
competence::competence(int _nb):m_nb(_nb){}
competence::~competence(){}
void competence::setCompetence(int _nb){m_nb = _nb;}
void competence::setDateObtention(std::string _date){m_dateCertif = _date;}
std::string competence::getDateObtention() const{return m_dateCertif;}
std::string competence::getCompetence() const{
    switch(m_nb){
        case 0:
            return "maconnerie";
        case 1:
            return "charpente";
        case 2:
            return "plomberie";
        case 3:
            return "electricite";
    };
}

#endif
