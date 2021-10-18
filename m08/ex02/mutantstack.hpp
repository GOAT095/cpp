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
        MutantStack(const MutantStack &obj) : std::stack<T> (obj);
        MutantStack& operator = (const MutantStack& obj);
        ~MutantStack(void){}

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator    begin();
        iterator    end();

}