#ifndef __CARGO_H__
#define __CARGO_H__

#include <string>

class cargo
{
    private:
        std::string m_cargo;
    public:
        cargo();
        cargo(const std::string& _cargo);
        ~cargo();
        void setCargo(const std::string& _cargo);
        std::string getCargo();
        friend std::ostream& operator<<(std::ostream& os, const cargo& _cargo);
};

#endif