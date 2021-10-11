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

Base *generate()
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

void identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A*\n";
    else if (dynamic_cast<B*>(p))
        std::cout << "B*\n";
    else if (dynamic_cast<C*>(p))
        std::cout << "C*\n";
}
void identify(Base  &p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A &\n";
            try{
                (void)dynamic_cast<B&>(p);
                std::cout << "B &\n";
                {
                    try{
                        (void)dynamic_cast<C&>(p);
                        std::cout << "C &\n";
                    }
                    catch(std::exception &e)
                    {std::cout << "dawdawwdawdwawd\n";}
                }
            }
            catch(std::exception &e)
                    {std::cout << "dawdawwdawdwawd\n";}
    }
    catch (std::bad_cast& bc)
    {std::cout << "bad_cast caught: " << bc.what() << '\n';}
}

int main ()
{
    Base *z = generate();
    identify(z);
    identify(*z);
    delete z;
    return 0;
}