#include "Array.hpp"

int main()
{
    std::cout << " ****** empty test ****** \n";
    Array<std::string> arr0;
    std::cout << arr0;
    std::cout << " ****** string test ****** \n";
    int size = 5;
    Array<std::string> arr(size);
    int i;
    for (i = 0 ; i < size; i++)
        arr[i] = "abc";
    std::cout << arr;

    std::cout << " ****** int test ****** \n";
    int size1 = 5;
    Array<char> arr1(size1);
    for (i = 0 ; i < size1; i++)
        arr1[i] = 'a' + i;
    std::cout << arr1;

    std::cout << " ****** copy test ****** \n";
    Array<char>  arr3(arr1);
    std::cout << arr3;
    arr1[0] = 'z';
    std::cout << "\n" << arr1;

    std::cout << " ****** assignment test ****** \n";
    arr1 = arr3;
    std::cout << arr1;
    std::cout << arr3;

    std::cout << " ****** out of range test ****** \n";
    try{
        std::cout << arr1[9];
    } catch (std::out_of_range &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}