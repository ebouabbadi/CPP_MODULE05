#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern : Default Constructor called\n";
}

Intern::Intern(const Intern &c)
{
    std::cout << "Intern : Copy Constructor called\n";
    *this = c;
}

Intern &Intern::operator=(const Intern &c)
{
    std::cout << "Intern : Copy assignment operator called\n";
    (void)c;
    return (*this);
}

AForm *makeShrubberyCreation(std::string target)
{
    std::cout<<"create ShrubberyCreationForm\n";
    return (new ShrubberyCreationForm(target));
}

AForm *makeRobotomyRequest(std::string target)
{
    std::cout<<"create RobotomyRequest\n";
    return (new RobotomyRequestForm(target));
}

AForm *makePresidentialPardon(std::string target)
{
    std::cout<<"create PresidentialPardon\n";
    return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(std::string name, std::string target)
{
    AForm *(*make[3])(std::string) = {makeShrubberyCreation, makeRobotomyRequest, makePresidentialPardon};
    std::string name_all[3] = {"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};
    for (int i = 0; i < 3; i++)
    {
        if (name_all[i] == name)
            return ((*make[i])(target));
    }
    std::cout << "obj is not create\n";
    return (NULL);
}

Intern::~Intern()
{
    std::cout << "Intern : Destructor called\n";
}