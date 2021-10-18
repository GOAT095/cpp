#pragma once


#include <iomanip>
#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(void) : std::stack<T>() { return ;}
        MutantStack(const MutantStack &obj) : std::stack<T>(obj) {return ;}
        MutantStack& operator = (const MutantStack& obj);
        ~MutantStack(void){
            return ;
        }

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator    begin();
        iterator    end();
};