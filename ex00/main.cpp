#include <iostream>
#include <exception>

class child : public std::exception
{
public:
    const char *what() const throw()
    {
        return (char *)"error";
    }
};

int main()
{
    child c;
    try
    {
        int x;
        std::cin >> x;
        if (x > 10)
            throw c;
        std::cout << "he\n";
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}