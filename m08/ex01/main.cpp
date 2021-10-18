#include "span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    // sp.addNumber(80); //for error test

    try
    {
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(const std::exception & e)
    {
        std::cerr << "this bitch empty\n";
    }
    try
    {
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception & e)
    {
        std::cerr << "this bitch empty\n";
    }
    
}