#include <iostream>
#include "hashtable.h"
struct Hash
{
    static const std::size_t m = 1e7 + 9;
    size_t operator()(const std::string& value) const
    {
        const std::array<std::size_t,26> p{26,676,17576,456976,1881367,8915506,1802949,6876638,8792435,8603112,3680714,5698483,8160432,2171043,6447073,7623754,8217433,3653069,4979713,9472430,6282964,3356920,7279848,9275886,1172820,493293};
        size_t hash(0LU);
        //42 est le nombre de lettre dans l'alphabet fr en comptant les lettres avec des caractères spéciaux
        int wordSize = value.size();
        for(int i=0; i<wordSize; i++){
            hash =  (hash + (value.at(i) - 'a' + 1) * p.at(i)) % m;
        }

        return hash;
    }
};

int main()
{
    MyHashTable<Hash> h("words.txt");
    h.testSpeed(0); // set 1 if you want more challenge
    h.testSpeed(1); // set 1 if you want more challenge
    return 0;
}
