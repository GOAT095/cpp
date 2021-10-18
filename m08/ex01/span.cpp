#include "span.hpp"

Span::Span(unsigned int n) : N(n){
    Size = myVect.size();
}

void    Span::addNumber(int number){
    try{
        if (myVect.size() < N)
            myVect.push_back(number);
        else
            throw std::string ("you have reached the size limite\n");
    }
    catch (std::string &e){
        std::cout << e;
    }
}

Span::Span(const Span& obj)
{
    *this = obj;
}

Span& Span::operator = (const Span& obj)
{
    N = obj.N;

    for (std::size_t i = 0; i < obj.myVect.size(); i++)
    {
        myVect.push_back(obj.myVect[i]);
    }
    return *this;
}

int Span::shortestSpan()
{
    int diff = INT_MAX;
    if (myVect.empty())
        throw std::exception ();
    std::sort(myVect.begin(), myVect.end());
    for (size_t i = 0; i < myVect.size() - 1; i++)
    {
        if (myVect[i + 1] - myVect[i] < diff)
            diff = myVect[i + 1] - myVect[i];
    }
    return diff;
}

int Span::longestSpan()
{
    if (myVect.empty())
        throw std::exception ();
    std::sort(myVect.begin(), myVect.end());
    return myVect[myVect.size() - 1] - myVect[0];
}

Span::~Span(){}