#if !defined(MYEXCEPTION_H)
#define MYEXCEPTION_H

#include <exception>
#include <string>

class myexception
{
private:
public:
    myexception(std::exception& e,std::string path);
    ~myexception() throw();
};


#endif // MYEXCEPTION_H
