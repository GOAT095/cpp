#include "easyfind.hpp"
#include <vector>
#include <map>
#include <list>
//hchorfi's main

int main()
{
    std::cout << "****** vector test ******\n";
    std::vector<int> myVect;
    
    for (int i = 0; i < 10 ; i++){
        myVect.push_back(i);
    }
    try
    {
        easyfind< std::vector<int> >(myVect, 5);
    }
    catch(std::string &e)
    {
        std::cout << e << '\n';
    }
    return 0;
}
