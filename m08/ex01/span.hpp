#pragma once


#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
    private:
        unsigned int N;
        std::vector<int> myVect;
        unsigned int Size;
        Span();

    public:
        Span(unsigned int n);
        Span(const Span& copy);
        Span& operator = (const Span& copy);
        ~Span();
        void    addNumber(int number);
        int shortestSpan();
        int longestSpan();
};