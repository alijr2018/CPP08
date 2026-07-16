#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <unistd.h>
#include <climits>


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
        void  addNumber(unsigned int k)
        {
            a.push_back(k);
        }
        unsigned int longestSpan()
        {
            std::sort(a.begin(), a.end());
            long count = 0;
            for (size_t i = 0; i <= a.size();i++)
            {
                for (size_t j = i+1; j <= a.size() -1; j++)
                {
                    if (a[j] - a[i] > count)
                        count = a[j] - a[i];
                }
            }
            return count;

        }
        unsigned int shortestSpan()
        {
            std::sort(a.begin(), a.end());
            unsigned int count = 0;
            unsigned int tmp = UINT_MAX;

            for (size_t i = 0; i <= a.size();i++)
            {
                for (size_t j = i+1; j <= a.size() -1; j++)
                {
                    count = a[j] - a[i];

                    if (count < tmp)
                        tmp = count;
                }
            }
            return tmp;
        };

};

#endif