#include "Span.hpp"

Span::Span(): n(0){}
Span::Span(unsigned int nb): n(nb){}
Span::~Span(){}

Span::Span(const Span &i): n(i.n){}
Span &Span::operator=(const Span& j)
{
    if (this != &j)
    {
        this->n = j.n;
    }
    return (*this);
}


