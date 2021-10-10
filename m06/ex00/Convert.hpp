#pragma once
#include <iomanip>
#include <iostream>
#include <stdexcept>

class Convert
{
    private:
        std::string Value;

    public:
        Convert();
        Convert(std::string value);
        Convert(const Convert& obj);
        Convert& operator = (const Convert& obj);

        std::string getValue() const;
        void    setValue(std::string value);
        void    print_it();


        class   NotPrintableException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        operator char();
        operator int();
        operator float();
        operator double();
};