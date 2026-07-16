#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cstdlib>
#include <stdexcept>
#include <iterator>

class Span
{
    private:
        std::vector<int> a;
        unsigned int n;
    public:
        Span();
        Span(unsigned int nb);
        ~Span();
        Span(const Span &i);
        Span& operator=(const Span &j);
        void  addNumber(unsigned int k);
        unsigned int longestSpan();
        unsigned int shortestSpan();
        template <typename T>
        void addRange(T i, T j);
};

template <typename T>
void Span::addRange(T i, T j)
{
    if (a.size() + std::distance(i, j) > n)
        throw "Not enough capacity for this range";
    a.insert(a.end(), i, j);
}
#endif