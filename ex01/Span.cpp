#include "Span.hpp"

Span::Span(): n(0){};
Span::Span(unsigned int nb): n(nb){};
Span::~Span(){};

Span::Span(const Span &i): a(i.a), n(i.n) {}
Span &Span::operator=(const Span& j)
{
    if (this != &j)
    {
        this->n = j.n;
        this->a = j.a;
    }
    return (*this);
}


void  Span::addNumber(unsigned int k)
{
    if (a.size() >= n)
        throw "Span is full";
    a.push_back(k);
}
unsigned int Span::longestSpan()
{
    if (a.size() < 2 || a.empty())
        throw "Not enough elements to find a span";

    std::sort(a.begin(), a.end());
    long count = 0;
    for (size_t i = 0; i < a.size();i++)
    {
        for (size_t j = i+1; j < a.size(); j++)
        {
            if (a[j] - a[i] > count)
                count = a[j] - a[i];
        }
    }
    return count;

}
unsigned int Span::shortestSpan()
{
    if (a.size() < 2 || a.empty())
        throw "Not enough elements to find a span";
    std::sort(a.begin(), a.end());
    unsigned int count = 0;
    unsigned int tmp = UINT_MAX;

    for (size_t i = 0; i < a.size();i++)
    {
        for (size_t j = i+1; j < a.size(); j++)
        {
            count = a[j] - a[i];

            if (count < tmp)
                tmp = count;
        }
    }
    return tmp;
}