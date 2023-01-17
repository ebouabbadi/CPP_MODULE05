#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(int G, std::string const N) : name(N)
{
    if (G > 150)
        throw(Bureaucrat::GradeTooLowException());
    else if (G < 0)
        throw(Bureaucrat::GradeTooHighException());
    this->grade = G;
    std::cout << "bureaucrat : " << this->name << " create a " << this->grade << " grade\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &c)
{
    *this = c;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &c)
{
    if (this == &c)
        return (*this);
    this->grade = c.grade;
    return (*this);
}
int Bureaucrat::getGrade() const
{
    return (this->grade);
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

void Bureaucrat::increment()
{
    if (this->grade < 0)
        throw(Bureaucrat::GradeTooHighException());
    this->grade--;
}

void Bureaucrat::decrement()
{
    if (this->grade > 150)
        throw(Bureaucrat::GradeTooLowException());
    this->grade++;
}

void Bureaucrat::signForm(Form f)
{
    try
    {
        f.beSigned(*this);
        std::cout << this->name << " signed " << f.getName() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << this->name << " couldn’t sign " << f.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(Form const &form)
{
    form.execute(*this);
    std::cout << "Bureaucrat : " << this->getName() << " executed " << form.getName() << std::endl;

}

Bureaucrat::~Bureaucrat()
{
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj)
{
    out << obj.getName();
    out << ", bureaucrat grade ";
    out << obj.getGrade();
    out << ".\n";
    return (out);
}