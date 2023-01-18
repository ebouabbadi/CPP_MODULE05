#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery", 145, 137)
{
    std::cout << "ShrubberyCreationForm : Default Constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &c)
{
    std::cout << "ShrubberyCreationForm : Copy Constructor called\n";
    *this = c;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &c)
{
    std::cout << "ShrubberyCreationForm : Copy assignment operator called\n";
    this->target = c.target;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (this->getsiGned() == false)
        throw(FormNotSigned());
    if (this->getGradeExecute() >= executor.getGrade())
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
    outfile.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm : Destructor called\n";
}