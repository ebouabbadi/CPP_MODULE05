#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("jurry",25, 5)
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

RobotomyRequestForm::~RobotomyRequestForm()
{
}
