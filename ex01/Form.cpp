#include "Form.hpp"

Form::Form()
{
    
}

Form::Form(const Form &c)
{
    *this = c;
}

Form &Form::operator=(const Form &c)
{
    this->name = c.name;
    return (*this);
}
Form::~Form()
{
}