#include <iostream>


template <typename T> int easyfind(T& container, int val)
{
    return std::find(container.begin(), container.end(), val);
}