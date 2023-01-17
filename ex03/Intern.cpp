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

Form *Intern::makeForm(std::string name, std::string target)
{
    
}

Intern::~Intern()
{
}