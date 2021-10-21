#ifndef __TRUCK_H__
#define __TRUCK_H__

#include "vehicule.h"
#include "cargo.h"

class truck : public vehicule
{
    private:
        cargo* m_cargo;  
    public:
        truck();
        truck(const std::string& _id, int _person, const std::string& _color, const std::string& _brand);
        ~truck();
        void setCargaison(cargo* _cargo);
        cargo* getCargaison() const;
        friend std::ostream& operator<<(std::ostream& os, const truck& _vehicule);
};

void addPersonToTruck(truck& _truck);
void addMultiplePersonToTruck(truck& _truck, int _nb);

#endif