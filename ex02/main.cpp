#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    ShrubberyCreationForm S("john");
    Bureaucrat q(145, "tom");
    q.executeForm(S);
    q.signForm(S);
    q.executeForm(S);
}