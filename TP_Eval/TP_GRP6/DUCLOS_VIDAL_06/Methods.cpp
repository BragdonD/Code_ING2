#include <iostream>
#include "vaisseau.h"

Pirate::Pirate()
{

}

Pirate::Pirate(std::string nom, std::string role,int age,int nbDents, Vaisseau *pt)
    :m_nom(nom),m_role(role),m_age(age),m_dents(nbDents), m_position(pt)
{

}

Pirate::~Pirate()
{

}

std::string Pirate::getName ()const
{
    return m_nom;

}

std::string Pirate::getRole ()const
{
    return m_role;
}
Vaisseau* Pirate::getPosition()const
{
    return m_position;
}
int Pirate::getAge ()const
{
    return m_age;
}
int Pirate::getDents ()const
{
    return m_dents;
}
void Pirate::setAge(int age)
{
    m_age=age;
}
void Pirate::setDents(int nb)
{
    m_dents=nb;
}
void Pirate::setRole(std::string Role)
{
 m_role=Role;
}
void Pirate::setName(std::string nom)
{
 m_nom=nom;
}
void Pirate::setPosition(Vaisseau *pt)
{
    *m_position=*pt;
}
void Pirate::affichage()
{
    std::cout<<getName()<<std::endl;
    std::cout<<getAge()<<std::endl;
    std::cout<<getRole()<<std::endl;
    std::cout<<getDents()<<std::endl;
    if(getPosition()!=NULL){
        std::cout<<getPosition()->getNom()<<std::endl;
    }
    else{
        std::cout<<"tortuga"<<std::endl;
    }
}
