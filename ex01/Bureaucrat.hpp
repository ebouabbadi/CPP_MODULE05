#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
private:
    std::string name;
    int grade;

public:
    Bureaucrat();
    Bureaucrat(int G, std::string N);
    Bureaucrat(const Bureaucrat &c);
    Bureaucrat &operator=(const Bureaucrat &c);
    int getGrade();
    std::string getName();

    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return ((char *)"grade is to high");
        }
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return (char *)"grade is to low\n";
        }
    };

    void increment(int n)
    {
        this->grade -= n;
        if (this->grade < 0)
            throw(Bureaucrat::GradeTooHighException());
    }

    void decrement(int n)
    {
        this->grade += n;
        if (this->grade > 150)
            throw(Bureaucrat::GradeTooLowException());
    }

    ~Bureaucrat();
};

#endif