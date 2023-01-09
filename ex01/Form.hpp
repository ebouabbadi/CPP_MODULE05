#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
private:
    std::string const name;
    bool siGned;
    const int gradeExecute;
    const int gradeSign;

public:
    Form();
    Form(const Form &c);
    Form &operator=(const Form &c);
    ~Form();
};

#endif