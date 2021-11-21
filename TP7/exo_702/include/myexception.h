#if !defined(MYEXCEPTION_H)
#define MYEXCEPTION_H

#include <exception>

class PointException : public std::exception
{
    private:
    public:
        PointException();
        ~PointException() throw();
        const char* what() throw();
};

#endif // MYEXCEPTION_H
