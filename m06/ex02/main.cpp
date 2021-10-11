#include <iomanip>
#include <iostream>
#include <stdexcept>

class Base
{
    public:
        virtual ~Base();
};

Base::~Base(){};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *gerator()
{
    std::srand (time(NULL));
    int i = std::rand() % 3;
    Base *ret;

    if (i == 0)
        ret = new A;
    else if (i == 1)
        ret = new B;
    else
        ret = new C;
    return ret;
}

void selector(Base *x)
{
    if (dynamic_cast<A*>(x))
        std::cout << "A'\n";
    else if (dynamic_cast<B*>(x))
        std::cout << "B'\n";
    else if (dynamic_cast<C*>(x))
        std::cout << "C'\n";
}

int main ()
{
    Base *z = gerator();
    selector(z);
    delete z;
    return 0;
}