#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;
class Bureaucrat
{
private:
    std::string const name;
    int grade;

public:
    Bureaucrat();
    Bureaucrat(int G, std::string const N);
    Bureaucrat(const Bureaucrat &c);
    Bureaucrat &operator=(const Bureaucrat &c);
    int getGrade()const;
    std::string getName()const;

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
    void signForm(Form f);
    void increment();
    void decrement();
    ~Bureaucrat();
};
std::ostream &operator<<(std::ostream& out, const Bureaucrat &old_obj);

#endif