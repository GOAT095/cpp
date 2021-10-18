#pragma once


#include <iomanip>
#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

template <typename T>

class MutantStack : std::stack<T>
{
    public:
        MutantStack(void) : std::stack<T> ();
        MutantStack(const MutantStack &obj) : std::stack<T> (const std::stack <T>);
        MutantStack& operator = (const MutantStack& obj);
        ~MutantStack(void){return ;}

        typedef typename std::stack::container_type::iterator iteraor;
        
}