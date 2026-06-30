#include "Span.hpp"
int main()
{
    srand(time(NULL));
    Span sp = Span(5);
    // sp.addNumber(rand());
    // sleep(1);
    // sp.addNumber(rand());
    for (size_t i = 0; i < 100000; i++)
    {
        sp.addNumber(rand() -546);
        usleep(1);
    }
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}