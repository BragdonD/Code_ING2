#ifndef __BATISSEUR_H__
#define __BATISSEUR_H__

#include "competence.h"
#include "projet.h"
#include <vector>

class batisseur
{
    private:
        std::string m_name;
        std::vector<competence> m_skills;
        int m_nbProjet;
        projet* m_actualProject;
         
    public:
        batisseur();
        batisseur(std::string _name);
        ~batisseur();
        void setNbProjet();
        void setMetier();
        void setDateCertif();
        void setMetierComplet();
        void setActualProjet();
        bool AddAProject(std::string n_name);
        bool DeleteProjectOnGoing()
};

batisseur::batisseur();
batisseur::batisseur(std::string _name);
batisseur::~batisseur();
void batisseur::setNbProjet();
void batisseur::setMetier();
void batisseur::setDateCertif();
void batisseur::setMetierComplet();
void batisseur::setActualProjet();

#endif