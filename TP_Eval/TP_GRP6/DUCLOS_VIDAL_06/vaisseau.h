#ifndef VAISSEAU_H_INCLUDED
#define VAISSEAU_H_INCLUDED

#include <string>
#include <vector>


class Pirate;

class Vaisseau{
private:
    std::string m_nom;
    int m_vitesse_max;
    int m_annee_construction;
    int m_equipage_min;
    int m_equipage_max;
    std::vector<Pirate> m_equipage;

public:
    Vaisseau();
    Vaisseau(std::string _nom, int _vitesse_max, int _annee_construction, int _equipage_min, int _equipage_max, int _equipage);
    ~Vaisseau();
    void setNom(std::string& _nom);
    bool setVitesseMax(int _vitesse_max);
    bool setEquipageMin(int _equipage_min);
    bool setEquipageMax(int _equipage_max);
    void setAnneeConstruction(int _annee);
    void AddMemberToEquipage(Pirate _newMember);
    std::string getNom() const;
    int getVitessemax() const;
    int getAnneeConstruction() const;
    int getEquipageMin() const;
    int getEquipagemax() const;
    std::vector<Pirate> getEquipage() const;
    bool SupprimerMembre(std::string& _pirateName);
    bool QuitterPort();
    void afficherEquipage();
};

class Pirate
{
private :
    ///Memebers
    std::string m_nom;
     std::string m_role;
    int m_age;
    int m_dents;
    Vaisseau* m_position;

public :
   ///Ctors and Dtor
   Pirate();
   Pirate(std::string nom, std::string role,int age,int nbDents,Vaisseau *pt);
   ~Pirate();

   ///Methods, Getters, Setters
   void affichage();
   void setPosition(Vaisseau *pt);
   void setAge(int age);
   void setDents(int nb);
   std::string getName()const;
   std::string getRole()const;
   int getAge() const;
   Vaisseau* getPosition ()const;
   int getDents() const;
   void setName(std::string nom);
   void setRole(std::string Role);

};

#endif // VAISSEAU_H_INCLUDED
