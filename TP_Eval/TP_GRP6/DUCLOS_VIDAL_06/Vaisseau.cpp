#include <iostream>
#include "vaisseau.h"

Vaisseau::Vaisseau(): m_equipage_min(0), m_equipage_max(0), m_equipage(0){}

Vaisseau::Vaisseau(std::string _nom, int _vitesse_max, int _annee_construction, int _equipage_min, int _equipage_max, int _equipage)
    :m_nom(_nom), m_vitesse_max(_vitesse_max), m_annee_construction(_annee_construction), m_equipage_min(_equipage_min), m_equipage_max(_equipage_max), m_equipage(_equipage)
{}

Vaisseau::~Vaisseau(){}

void Vaisseau::setNom(std::string& _nom)
{
    m_nom = _nom;
}

bool Vaisseau::setVitesseMax(int _vitesse_max)
{
    if(_vitesse_max < 0 ){
        return false;
    }
    else{
        m_vitesse_max = _vitesse_max;
        return true;
    }
}

bool Vaisseau::setEquipageMin(int _equipage_min)
{
    if(_equipage_min < 0){
        return false;
    }
    else{
        m_equipage_min = _equipage_min;
        return true;
    }
}

bool Vaisseau::setEquipageMax(int _equipage_max){
    if(_equipage_max < getEquipageMin()){
        return false;
    }
    else{
        m_equipage_max = _equipage_max;
        return true;
    }
}

void Vaisseau::setAnneeConstruction(int _annee){
    m_annee_construction = _annee;
}

std::string Vaisseau::getNom() const{
    return m_nom;
}

int Vaisseau::getVitessemax()const {
    return m_vitesse_max;
}

int Vaisseau::getAnneeConstruction() const{
    return m_annee_construction;
}

int Vaisseau::getEquipageMin() const{
    return m_equipage_min;
}

int Vaisseau::getEquipagemax() const{
    return m_equipage_max;
}

std::vector<Pirate> Vaisseau::getEquipage() const{
    return m_equipage;
}

bool Vaisseau::SupprimerMembre(std::string& _pirateName){
    return false;
}

bool Vaisseau::QuitterPort(){
    int sizeEquippage = getEquipage().size();
    if(getEquipageMin()<sizeEquippage && sizeEquippage<getEquipagemax()){
        return true;
    }
    else{
        return false;
    }
}

void Vaisseau::AddMemberToEquipage(Pirate _newMember){
    m_equipage.push_back(_newMember);
}

void Vaisseau::afficherEquipage(){
    for(int i=0; i<getEquipage().size(); i++){
        std::cout << "here" << std::endl;
        getEquipage().at(i).affichage();
    }
}

