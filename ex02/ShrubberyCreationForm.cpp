#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("jurry",145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &c)
{
    *this = c;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &c)
{
    this->target = c.target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
