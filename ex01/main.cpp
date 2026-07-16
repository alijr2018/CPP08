#include "Span.hpp"
int main()
{
    srand(time(0));
    Span sp = Span(5);
    try
    {
        for (size_t i = 0; i < 100; i++)
        {
            sp.addNumber(rand());
        }

    }
    catch (const char * msg)
    {
        std::cout << msg << std::endl;
    }
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    Span big(10000);
    std::vector<int> num;
    for (size_t i = 0; i < 10000; i++)
    {
        num.push_back(i);
    }
    try
    {
        big.addRange(num.begin(), num.end());
    }
    catch (const char * msg)
    {
        std::cout << msg << std::endl;
    }
    std::cout << "Big shortest: " << big.shortestSpan() << std::endl;
    std::cout << "Big longest: " << big.longestSpan() << std::endl;

    Span empty;
    try {
        empty.shortestSpan();
    } catch (const char* e) {
        std::cout <<  e << std::endl;
    }

    Span one(1);
    one.addNumber(42);
    try {
        one.longestSpan();
    } catch (const char* e) {
        std::cout <<  e << std::endl;
    }
    return 0;
}