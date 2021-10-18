#include "mutantstack.hpp"


MutantStack<T>::MutantStack& operator = (const MutantStack& obj)
{
    std::stack::operator = (stack);
    return *this;
}


iterator   MutantStack<T>::being()
{   
    return (std::stack::begin());
}

iterator    MutantStack<T>::end()
{
    return (std::stack::end());
}
