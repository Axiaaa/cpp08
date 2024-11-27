#include "MutantStack.hpp"
#include <iostream>

int main()
{
    MutantStack<int> mstack;
    mstack.push(42);
    mstack.push(21);
    mstack.push(84);
    std::cout << "Top element: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Size after pop: " << mstack.size() << std::endl;

    mstack.push(7);
    mstack.push(14);
    mstack.push(28);
    mstack.push(56);

    std::cout << "Elements in stack:" << std::endl;
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
    {
        std::cout << *it << std::endl;
    }

    std::cout << "Testing copy constructor:" << std::endl;
    MutantStack<int> copyStack(mstack);
    for (MutantStack<int>::iterator it = copyStack.begin(); it != copyStack.end(); ++it)
    {
        std::cout << *it << std::endl;
    }

    std::cout << "Testing assignment operator:" << std::endl;
    MutantStack<int> assignedStack;
    assignedStack = mstack;
    MutantStack<int>::iterator it = assignedStack.begin();
    while (it != assignedStack.end())
    {
        std::cout << *it << std::endl;
        it++;
    }
    return 0;
}