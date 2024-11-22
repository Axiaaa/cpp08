#pragma once
#include <iostream>
#include <vector>

using std::vector;

class Span {

private:
  unsigned int numberOfStoredInts;
  vector<int> numbers;

public:
  Span();
  ~Span();
  Span &operator=(const Span &rhs);
  Span(const Span &src);
  Span(unsigned int n);

  void addNumber(vector<int>::iterator iterator_first,
                 vector<int>::iterator iterator_last);
  void addNumber(int number);
  int shortestSpan();
  int longestSpan();
};
