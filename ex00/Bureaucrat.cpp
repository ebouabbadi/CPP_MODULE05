#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(int G, std::string N)
{
    if (G > 150)
        throw(Bureaucrat::GradeTooLowException());
    else if (G < 0)
        throw(Bureaucrat::GradeTooHighException());
    this->name = N;
    this->grade = G;
    std::cout << "bureaucrat : " << this->name << " create a " << this->grade << " grade\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &c)
{
    *this = c;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &c)
{
    this->grade = c.grade;
    this->name = c.name;
    return (*this);
}
int Bureaucrat::getGrade()
{
    return (this->grade);
}

std::string Bureaucrat::getName()
{
    return (this->name);
}

Bureaucrat::~Bureaucrat()
{
}
