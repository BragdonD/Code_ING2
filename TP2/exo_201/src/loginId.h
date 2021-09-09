#ifndef __LOGINID__H__
#define __LOGINID__H__

#include <string>

class loginId{
    public:
    loginId(std::string newPassword, std::string newLogin);
    bool compareInput(std::string passwordWrited, std::string loginWrited);

    private:
    std::string password;
    std::string login;
};

#endif