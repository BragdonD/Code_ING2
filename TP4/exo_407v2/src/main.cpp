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
            hash = (hash + (value[i] - 'a' + 1) * p_pow) % m;
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
            hash = (hash+ value[i])*541;
        }
        return hash;
    }
};

struct HashXor
{
    static const size_t initvalue = 2166136261U;
    static const size_t multvalue = 16777619;
    size_t operator()(const std::string& value) const
    {
        //un nombre premier
        size_t hash(initvalue);
        for(int i=0; i<value.size(); i++){
            //on multiplie a nouveau par un autre nombre premier
            hash = (hash ^ value[i]) * multvalue;
            //hash = hash * multvalue;
        }
        return hash;
    }
};


int main()
{
    MyHashTable<HashPolynom> h("words.txt");
    
    h.testSpeed(0); 
    h.testSpeed(1); 
    h.testSpeed(2);

    MyHashTable<HashFirstNb> g("words.txt");

    g.testSpeed(0); 
    g.testSpeed(1); 
    g.testSpeed(2);

    MyHashTable<HashXor> p("words.txt");

    p.testSpeed(0); 
    p.testSpeed(1); 
    p.testSpeed(2);
    return 0;
}
