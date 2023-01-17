#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery_Creation", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery_Creation", 145, 137)
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

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (this->getsiGned() == false || this->getGradeExecute() >= executor.getGrade())
        throw(Bureaucrat::GradeTooHighException());
    std::ofstream outfile;
    outfile.open(this->target + "_shrubbery");
    outfile << "       _-_\n";
    outfile << "   /~~   ~~\\\n";
    outfile << "/~~         ~~\\\n";
    outfile << "{               }\n";
    outfile << " \\  _-     -_  /\n";
    outfile << "   ~  \\ //  ~\n";
    outfile << "_- -   | | _- _\n";
    outfile << "  _ -  | |   -_\n";
    outfile << "      // \\\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}