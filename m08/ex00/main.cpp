#include "span.hpp"
#include <vector>
#include <map>
#include <list>

int main()
{
    std::vector<int> myVect;

    for (int i = 0; i < 10 ; i++){
        myVect.push_back(i);
    }
    easyfind< std::vector<int> >(myVect, 5);
    return 0;
}
