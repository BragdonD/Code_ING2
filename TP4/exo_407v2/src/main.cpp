#include <iostream>
#include "hashtable.h"

struct HashPolynom
{
    //un nombre premier pour réduire les collisions
    static const std::size_t m = 1e18 + 9;
    size_t operator()(const std::string& value) const
    {
        size_t hash(0);
        //variable des puissance de la fonction polynomiale
        size_t p_pow(1);
        const int p(42);
        //42 est le nombre de lettre dans l'alphabet fr en comptant les lettres avec des caractères spéciaux
        for(int i=0; i<value.size(); i++){
            //calcul du terme de la puissance p^i
            hash = (hash + (value.at(i) - 'a' + 1) * p_pow) % m;
            //recalcule de la nouvelle puissance
            p_pow = (p_pow * p) % m;
        }

        return hash;
    }
};

struct HashFirstNb
{
    size_t operator()(const std::string& value) const
    {
        //un nombre premier
        size_t hash(503);
        for(int i=0; i<value.size(); i++){
            //on multiplie a nouveau par un autre nombre premier
            hash = (hash+ value.at(i))*541;
        }
        return hash;
    }
};


int main()
{
    //MyHashTable<HashPolynom> h("words.txt");
    MyHashTable<HashFirstNb> g("words.txt");
    //h.testSpeed(0); 
    //h.testSpeed(1); 
    //h.testSpeed(2);
    g.testSpeed(0); 
    g.testSpeed(1); 
    g.testSpeed(2); 
    return 0;
}
