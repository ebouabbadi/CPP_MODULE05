#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat b;
    ShrubberyCreationForm f1("redouan");
    Form *fff = &f1;
    b.signForm(f1);
    f1.execute(b);
    return 0;
}