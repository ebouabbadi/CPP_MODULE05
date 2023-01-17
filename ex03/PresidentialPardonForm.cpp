#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("jurry", 72, 45)
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
void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (this->getsiGned() == false || this->getGradeExecute >= execute->grade)
        throw(Bureaucrat::GradeTooHighException());
    std::cout << this->target << "PresidentialPardonForm : has been pardoned by Zaphod Beeblebrox.\n";
}
PresidentialPardonForm::~PresidentialPardonForm()
{
}
