#ifndef HASHTABLE_H_INCLUDED
#define HASHTABLE_H_INCLUDED

#include <chrono>
#include <iostream>
#include <unordered_set>
#include <fstream>
#include <cmath>
#include <windows.h>


struct Equality
{
    inline bool operator()(const std::string& a, const std::string& b) const
    {
        return a == b;
    }
};

void gotoligcol( int lig, int col )
{
    // ressources
    COORD mycoord;

    mycoord.X = col;
    mycoord.Y = lig;
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), mycoord );
}

template<typename MyHash>
class MyHashTable
{
    private:
        std::unordered_set<std::string, MyHash, Equality> m_hashTable;
        int m_total = 0;

        // Code � l'arrache pas touche !
        int getNbLine(const std::string& path)
        {
            int total = 0;
            std::ifstream ifs(path);
            if (ifs)
            {
                std::string line;
                while (std::getline(ifs, line))
                    ++total;
            }
            ifs.close();

            return total;
        }

    public:
        MyHashTable(const std::string& path)
        {
            m_total = getNbLine(path);

            // Loading hashTable
            auto var=std::chrono::system_clock::now();
            std::ifstream ifs(path);
            if (ifs)
            {
                int c = 0;
                std::string line;

                while (std::getline(ifs, line))
                {
                    ++c;
                    m_hashTable.insert(line);
                    if (c%20000==0)
                    {
                        //gotoligcol(0,0);
                        std::cout << "Loading " << round(c/(float)m_total*100) << " %"  << std::endl;
                    }
                }
            }
            auto var2=std::chrono::system_clock::now();
            auto r=std::chrono::duration_cast<std::chrono::milliseconds>(var2 - var);
            std::cout << std::endl << "Execution time = " << r.count() << "ms" << std::endl;

            //gotoligcol(0,0);
            std::cout << "Loading 100 % - Nb words loaded: " << m_hashTable.size() << " in " << r.count() << std::endl;
        }

        void testSpeed(int level = 0)
        {
            unsigned long long cpt = 0;
            unsigned long long _max = 100000;
            if (level == 1) _max = _max*10; // pour Louis-felix et les autres ;)
            else if (level == 2) _max = _max*100; // pour les dieux de l'info ;)

            auto var=std::chrono::system_clock::now();
            std::cout << std::endl << "Testing hash table speed  [level=" << level << "]" << std::endl;
            for (unsigned int i=0; i<_max; i++)
            {
                auto r = m_hashTable.find("coucou");
                //std::cout << "r=" << *r << std::endl;
                cpt += (*r).size();
            }
            auto var2=std::chrono::system_clock::now();
            auto r=std::chrono::duration_cast<std::chrono::milliseconds>(var2 - var);
            std::cout << std::endl << "Execution time = " << r.count() << "ms" << std::endl;
        }
};

#endif // HASHTABLE_H_INCLUDED
