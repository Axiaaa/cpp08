#include "Span.hpp" 

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    

    Span sp2 = Span(15);
    std::vector<int> v;
    for (int i = 0; i < 15; i++) {
      v.push_back(i);
    }
    sp2.addNumber(v.begin(), v.end());
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;

    try 
    {
      sp2.addNumber(42);
    } 
    catch (const std::exception& e)
    {
      std::cerr << e.what() << std::endl;
    }
    return 0;
}
