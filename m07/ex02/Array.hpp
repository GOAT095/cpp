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
    Array operator = (const Array& obj)
    {
        this->lengh = obj.lengh;
        try
        {
            arr = new T[obj.lengh]();
            for(int i = 0 ; i < 100 ; i++)
            {
                arr[i] = obj.arr[i];
            }
            return *this;
        }
        catch(std::bad_alloc &e)
        {
            std::cout << "bad_alloc caught: " << e.what() << std::endl;
        }
        return 0;
    }

    ~Array()
    {
    delete[] this->arr;
    std::cout << "BOOOM\n";
    }


};
