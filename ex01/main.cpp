#include "Span.hpp"
int main()
{
    srand(time(NULL));
    Span sp = Span(5);
    for (size_t i = 0; i < 100; i++)
    {
        sp.addNumber(rand());
        usleep(1);
    }
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}