

#include <iomanip>
#include <iostream>
#include <stdexcept>

typedef struct Data
{
    std::string s1;
    int n;
    std::string s2;
}               t_Data;


uintptr_t serialize(Data* ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
    return (reinterpret_cast<t_Data *>(raw));
}

int main()
{
    t_Data d;
    d.s1 = "abc";
    d.s2 = "def";
    d.n = 1231;

    uintptr_t data = serialize(&d);
    t_Data *newdata = deserialize(data);

    std::cout << "string1: " << newdata->s1 << " ";
    std::cout << "string2: " << newdata->s2 << " ";
    std::cout << "number: " << newdata->n << std::endl;
}