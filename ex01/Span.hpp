# include <iostream>
# include <vector>
# include <algorithm>

using std::vector;

class Span {

    private: 
        unsigned int numberOfStoredInts;
        vector<int> numbers;

    public : 

        Span();
        ~Span();
        Span(unsigned int n);
        Span(const Span& src);
        Span& operator=(const Span& rhs);


        void addNumber(int number);
        int shortestSpan();
        int longestSpan();

};