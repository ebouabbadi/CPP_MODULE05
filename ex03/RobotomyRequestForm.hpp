#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
      std::string target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &c);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &c);
    void    execute(Bureaucrat const & executor) const;
    ~RobotomyRequestForm();

};

#endif

