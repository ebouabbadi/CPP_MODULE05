#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;
class Bureaucrat
{
private:
    const std::string name;
    int Grade;

public:
    Bureaucrat();
    Bureaucrat(int G, std::string const N);
    Bureaucrat(const Bureaucrat &c);
    Bureaucrat &operator=(const Bureaucrat &c);
    ~Bureaucrat();
    int getGrade() const;
    std::string getName() const;

    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return ((char *)"this Grade is Too High\n");
        }
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return (char *)"this Grade is Too Low\n";
        }
    };
    void increment();
    void decrement();
    void signForm(AForm &f);
    void executeForm(AForm const &form);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &old_obj);

#endif