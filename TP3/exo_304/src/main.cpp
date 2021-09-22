#include <iostream>
#include "person.h"

int main(){
    person person2("Thomas", "DUCLOS", "Male",10,12,2002,NULL);
    person person1("Hugo", "VIDAL", "Male", 11, 2, 2003, NULL);
    person person3("Ibrahim", "KEBE", "Male", 6, 6, 2006, NULL);
    
    std::cout << "Start : " <<std::endl;
    person1.Printinfo();
    person2.Printinfo();
    person3.Printinfo();

    person1.Marry(&person2);
    std::cout<<"First Mariage : "<<std::endl;
    person1.Printinfo();
    person2.Printinfo();
    person3.Printinfo();

    person1.Divorce();
    std::cout<<"First Divorce : "<<std::endl;
    person1.Printinfo();
    person2.Printinfo();
    person3.Printinfo();

    person1.Marry(&person3);
    std::cout<<"2nd Mariage : "<<std::endl;
    person1.Printinfo();
    person2.Printinfo();
    person3.Printinfo();
    return 0;
}