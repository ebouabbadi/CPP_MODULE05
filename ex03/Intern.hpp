#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
class Intern
{
public:
    Intern();
    Intern(const Intern &c);
    Intern &operator=(const Intern &c);
    Form *makeForm(std::string name, std::string target);
    ~Intern();
};

#endif