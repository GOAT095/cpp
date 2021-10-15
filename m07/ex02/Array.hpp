#pragma once

#include <iostream>

template <typename T>

class array
{
    T *arr;
    unsigned int lengh;

    array()
    {  
        try
        {
            arr = new T;
        }
        catch(std::bad_alloc &e)
        {
            std::cout << "bad_alloc caught: " << e.what() << std::endl;
        }
    }
    array(unsigned int i)
    {
        try
        {
            arr = new T[i];
        }
        catch(std::bad_alloc &e)
        {
            std::cout << "bad_alloc caught: " << e.what() << std::endl;
        }
    }
    
      

};