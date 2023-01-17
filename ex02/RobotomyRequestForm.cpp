#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("jurry", 25, 5)
{
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &c)
{
    *this = c;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &c)
{
    this->target = c.target;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (this->getsiGned() == false || this->getGradeExecute() >= executor.getGrade())
        throw(Bureaucrat::GradeTooHighException());
    std::cout << "RobotomyRequestForm :";
    srand(time(nullptr));
    if (rand() % 2)
        std::cout << this->target << " has been robotomized\n";
    else
        std::cout << "the robotomy failed.\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
