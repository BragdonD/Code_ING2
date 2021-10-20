#ifndef __COMPTEUR_H__
#define __COMPTEUR_H__

class counter{
    public:
    //constructor
    counter();
    counter(int n_value);
    //modif
    void setCounter(int n_value);
    void decrement(int n_incremt);
    void increment(int n_incremt);
    //getter
    int getValue() const;

    private:
    int m_value;
};

#endif