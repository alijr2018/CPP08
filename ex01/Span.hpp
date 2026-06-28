#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>

template <typename T>
class Span
{
    private:
        T *a;
        unsigned int n;
    public:
        Span();
        Span(unsigned int nb);
        ~Span();
        Span(const Span &i);
        Span& operator=(const Span &j);
        void  addNumber(unsigned int k);
        unsigned int shortestSpan(unsigned int s);
        unsigned int longestSpan(unsigned int l);

};

#endif