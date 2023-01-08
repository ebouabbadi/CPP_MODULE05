#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form
{
private:
    std::string const name;
    bool _signed;
    const int grade_execute;
    const int grade_sign;

public:
    Form();
    ~Form();
};

#endif