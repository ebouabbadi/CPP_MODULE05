#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
    std::string target;

public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm &c);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &c);
    void execute(Bureaucrat const &executor) const;
    ~PresidentialPardonForm();
};

#endif