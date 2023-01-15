#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
    const std::string name;
    bool siGned;
    const int GradeExecute;
    const int GradeSign;

public:
    Form();
    Form(std::string n, int gS,int gE);
    Form(const Form &c);
    Form &operator=(const Form &c);
    ~Form();
    std::string getName()const;
    int getGradeExecute()const;
    int getGradeSign()const;
    bool getsiGned()const;

    void beSigned(Bureaucrat b);
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
    virtual void    execute(Bureaucrat const & executor) const =0;
};
std::ostream &operator<<( std::ostream& out, const Form &obj);

#endif
