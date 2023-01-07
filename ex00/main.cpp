#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat c(150, "john");
        c.increment(40);
        std::cout<<c.getGrade();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}