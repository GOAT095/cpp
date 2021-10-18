#pragma once


#include <iomanip>
#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>
#include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(void){ return ;}
        MutantStack(const MutantStack &obj) {
            (void) obj;
            return ;}
        MutantStack& operator = (const MutantStack& obj){
            this->c = obj.c;
        }
        ~MutantStack(void){
        }

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator    begin(){
            return this->c.begin();
        }
        iterator    end(){
            return this->c.end();
        }
};