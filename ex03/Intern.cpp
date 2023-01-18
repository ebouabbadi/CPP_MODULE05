#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &c)
{
    *this = c;
}

Intern &Intern::operator=(const Intern &c)
{
    (void)c;
    return (*this);
}

Form *makeShrubberyCreation(std::string target)
{
    std::cout<<"create ShrubberyCreationForm\n";
    return (new ShrubberyCreationForm(target));
}

Form *makeRobotomyRequest(std::string target)
{
    std::cout<<"create RobotomyRequest\n";
    return (new RobotomyRequestForm(target));
}

Form *makePresidentialPardon(std::string target)
{
    std::cout<<"create PresidentialPardon\n";
    return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm(std::string name, std::string target)
{
    Form *(*make[3])(std::string) = {makeShrubberyCreation, makeRobotomyRequest, makePresidentialPardon};
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
}