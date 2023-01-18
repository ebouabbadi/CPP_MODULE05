#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Form f1("john", 40, 145);
        Bureaucrat b1(30, "tom");
        f1.beSigned(b1);
        std::cout<<f1 <<b1;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}