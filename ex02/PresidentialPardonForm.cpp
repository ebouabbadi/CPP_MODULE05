#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("jurry",72, 45)
{
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &c)
{
    *this = c;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &c)
{
    this->target = c.target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
