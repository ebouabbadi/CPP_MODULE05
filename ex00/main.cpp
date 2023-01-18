#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b1(140, "john");
        b1.decrement();
        std::cout << b1;
        b1.decrement();
        std::cout << b1;
        b1.decrement();
        std::cout << b1;
        b1.decrement();
        Bureaucrat b2(-1, "tom");
        std::cout << b1;
        b1.decrement();
        std::cout << b1;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}