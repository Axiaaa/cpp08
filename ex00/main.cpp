#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    std::cout << "Looking for 3 in the vector: ";
    std::vector<int>::iterator it = easyfind(vec, 3);
    if (it != vec.end())
        std::cout << "Found it at pos " << *easyfind(vec, 3) << std::endl;
    else
        std::cout << "Not found." << std::endl;

    std::cout << "Looking for 42 in the vector: ";
    it = easyfind(vec, 42);
    if (it != vec.end())
        std::cout << "Found it!" << std::endl;
    else
        std::cout << "Not found." << std::endl;

    return 0;


}
