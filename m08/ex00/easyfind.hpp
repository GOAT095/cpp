#pragma once

#include <algorithm>
#include <iostream>
#include <iomanip>

template <typename T>
void    easyfind(T container, int n)
{
    typename T::iterator it;
    it = std::find (container.begin(), container.end(), n);
    if (it != container.end())
        std::cout << "Element found in container: " << *it << '\n';
    else
        std::cout << "Element not found in container\n";
}