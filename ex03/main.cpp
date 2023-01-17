#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int make1()
{
    return (1);
}
int make2()
{
    return (2);
}
int make3()
{
    return (3);
}

int main()
{
    int (make[3])(int)= {make1, make2, make3};
}