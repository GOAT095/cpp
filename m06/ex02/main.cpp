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
//if dynamic_cast for a pointer type fails it returns a null pointer

void identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A *\n";
    else if (dynamic_cast<B*>(p))
        std::cout << "B *\n";
    else if (dynamic_cast<C*>(p))
        std::cout << "C *\n";
}
// when it fails for a reference type it can't return a null reference so you have to catch it
void identify(Base  &p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A &\n";
            
    }
    catch (std::bad_cast& bc)
    {
        try{
                (void)dynamic_cast<B&>(p);
                std::cout << "B &\n";
        }
        catch(std::exception &e){
           try{
                    (void)dynamic_cast<C&>(p);
                    std::cout << "C &\n";
                    }
                    catch(std::bad_cast &e)
                        {std::cout << e.what() << std::endl;}
            }

    }
}

int main ()
{
    Base *z = generate();
    identify(z);
    identify(*z);
    delete z;
    return 0;
}