#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"
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