#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"
#include <fstream>


class ShrubberyCreationForm : public AForm
{
private:
      std::string target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &c);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &c);
    void    execute(Bureaucrat const & executor) const;
    ~ShrubberyCreationForm();
};

#endif
