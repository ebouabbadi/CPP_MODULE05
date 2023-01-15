#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
      std::string target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &c);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &c);
    ~ShrubberyCreationForm();

};

#endif
