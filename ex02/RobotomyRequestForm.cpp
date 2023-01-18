#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():AForm("Robotomy", 25, 5)
{
    std::cout << "RobotomyRequestForm : Default Constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy", 25, 5)
{
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &c)
{
    std::cout << "RobotomyRequestForm : Copy Constructor called\n";
    *this = c;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &c)
{
    std::cout << "RobotomyRequestForm : Copy assignment operator called\n";
    this->target = c.target;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (this->getsiGned() == false)
        throw(FormNotSigned());
    if (this->getGradeExecute() >= executor.getGrade())
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
    std::cout << "RobotomyRequestForm : Destructor called\n";
}
