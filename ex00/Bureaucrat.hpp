#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

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
            return ((char *)"this Grade is Too High");
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
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &old_obj);

#endif