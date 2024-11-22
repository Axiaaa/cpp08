#include "Span.hpp"
#include <algorithm>

Span::Span() {}

Span::Span(unsigned int n) { this->numberOfStoredInts = n; }

Span::Span(const Span &src) { *this = src; }

Span &Span::operator=(const Span &rhs) {
  if (this == &rhs) {
    return *this;
  }
  this->numberOfStoredInts = rhs.numberOfStoredInts;
  this->numbers = rhs.numbers;
  return *this;
}

void Span::addNumber(int number) {
  if (this->numbers.size() < this->numberOfStoredInts) {
    this->numbers.push_back(number);
  } else {
    throw std::runtime_error("Span is full");
  }
}

void Span::addNumber(std::vector<int>::iterator begin,
                     std::vector<int>::iterator end) {
  if (this->numbers.size() + std::distance(begin, end) >
      this->numberOfStoredInts) {
    throw std::runtime_error("Span is full");
  }
  this->numbers.insert(this->numbers.end(), begin, end);
}

int Span::shortestSpan() {
  if (this->numbers.size() < 2) {
    throw std::runtime_error("Not enough numbers to calculate span");
  }
  std::vector<int> sortedNumbers = this->numbers;
  sort(sortedNumbers.begin(), sortedNumbers.end());
  int shortestSpan = sortedNumbers[1] - sortedNumbers[0];
  for (unsigned int i = 1; i < sortedNumbers.size() - 1; i++) {
    int span = sortedNumbers[i + 1] - sortedNumbers[i];
    if (span < shortestSpan) {
      shortestSpan = span;
    }
  }
  return shortestSpan;
}

int Span::longestSpan() {
  if (this->numbers.size() < 2) {
    throw std::runtime_error("Not enough numbers to calculate span");
  }
  std::vector<int> sortedNumbers = this->numbers;
  sort(sortedNumbers.begin(), sortedNumbers.end());
  return sortedNumbers[sortedNumbers.size() - 1] - sortedNumbers[0];
}

Span::~Span() {}
