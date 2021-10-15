#pragma once

#include <iostream>

template <typename T>

class Array
{
    public:

        T *arr;
        unsigned int length;

        Array()
        {
            arr = new T; // () so takes the default value of the type
            length = 0;
        }

        Array(unsigned int i)
        {
            length = i;
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
            this->length = obj.length;
            try
            {
                arr = new T[length];
                for(unsigned int i = 0 ; i < obj.length ; i++)
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
            if (length)
                delete[] arr;
            std::cout << "BOOOM\n";
        }

        unsigned int getSize() const{
            return this->length;
        }

        T* getArr(){
            return this->arr;
        }

        T& operator [] (unsigned int i){
            if (i < 0 || i >= this->length)
                throw std::out_of_range("out of range");
            return arr[i];
        }


};

template <typename T>
std::ostream& operator << (std::ostream& o, Array<T> &obj){
    unsigned int j = obj.getSize();
    T *ptr = obj.getArr();
    o << "size : " << j << "\n";
    for (unsigned int i = 0; i < j ; i ++){
        o << "'" << ptr[i] << "'\n";
    }
    return o;
};