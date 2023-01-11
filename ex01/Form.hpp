#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>

class Form
{
private:
    const std::string name;
    bool siGned;
    const int GradeExecute;
    const int GradeSign;

public:
    Form();
    Form(const Form &c);
    Form &operator=(const Form &c);
    ~Form();
    std::string getName();
    const int getGradeExecute();
    const int getGradeSign();
    bool getsiGned(0...);

    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return ((char *)"Grade is to high");
        }
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return (char *)"Grade is to low\n";
        }
    };
};

#endif......