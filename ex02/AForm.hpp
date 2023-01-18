#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
private:
    const std::string name;
    bool siGned;
    const int GradeExecute;
    const int GradeSign;

public:
    AForm();
    AForm(std::string n, int gS, int gE);
    AForm(const AForm &c);
    AForm &operator=(const AForm &c);
    ~AForm();
    std::string getName() const;
    int getGradeExecute() const;
    int getGradeSign() const;
    bool getsiGned() const;

    void beSigned(Bureaucrat b);
    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return ((char *)"Grade is to high\n");
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
    class FormNotSigned : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return (char *)"Form is not signd\n";
        }
    };
    virtual void execute(Bureaucrat const &executor) const = 0;
};
std::ostream &operator<<(std::ostream &out, const AForm &obj);

#endif
