#pragma once

#include <iostream>

template <typename T>

class Array
{
    T *arr;
    unsigned int lengh;

    Array()
    {  
        try
        {
            arr = new T(); // () so takes the default value
        }
        catch(std::bad_alloc &e)
        {
            std::cout << "bad_alloc caught: " << e.what() << std::endl;
        }
    }

    Array(unsigned int i)
    {
        try
        {
            arr = new T[i]();
        }
        catch(std::bad_alloc &e)
        {
            std::cout << "bad_alloc caught: " << e.what() << std::endl;
        }
    }
    Array(Array const &obj)
    {
        *this = obj;
    }
    Array operator = (const Brain& obj)
    {
        this->lengh = obj.lengh;
        for(int i = 0 ; i < 100 ; i++)
        {
            arr[i] = obj.arr[i];
        }
        return *this;
    }

    ~Array(){std::cout << "BOOOM\n";}



};
