#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat : Default Constructor called\n";
}

Bureaucrat::Bureaucrat(int G, std::string const N) : name(N)
{
    if (G > 150)
        throw(Bureaucrat::GradeTooLowException());
    else if (G < 0)
        throw(Bureaucrat::GradeTooHighException());
    this->Grade = G;
    std::cout << "Bureaucrat : " << this->name << " Create a " << this->Grade << " Grade\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &c)
{
    std::cout << "Bureaucrat : Copy Constructor called\n";
    *this = c;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &c)
{
    std::cout << "Bureaucrat : Copy assignment operator called\n";
    if (this == &c)
        return (*this);
    this->Grade = c.Grade;
    return (*this);
}
int Bureaucrat::getGrade() const
{
    return (this->Grade);
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

void Bureaucrat::increment()
{
    if (this->Grade <= 0)
        throw(Bureaucrat::GradeTooHighException());
    this->Grade--;
}

void Bureaucrat::decrement()
{
    if (this->Grade >= 150)
        throw(Bureaucrat::GradeTooLowException());
    this->Grade++;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat : Destructor called\n";
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj)
{
    out << obj.getName();
    out << ", bureaucrat grade ";
    out << obj.getGrade();
    out << ".\n";
    return (out);
}

void Bureaucrat::signForm(AForm &f)
{
    try
    {
        f.beSigned(*this);
        std::cout << this->name << " signed " << f.getName() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << this->name << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const &form)
{
    try
    {
        form.execute(*this);
        std::cout << "Bureaucrat : " << this->name << " executed " << form.getName() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << this->name << " couldn't execute " << form.getName() << " because " << e.what() << '\n';
    }
}
