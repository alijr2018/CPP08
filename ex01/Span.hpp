#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <unistd.h>
#include <climits>
// template <typename T>
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
            // printf("------------\n");
            // for(size_t i = 0; i < a.size(); i++)
                // printf("%d\n",a[i]);
            // printf("------------\n");

            std::sort(a.begin(), a.end());
            // printf("------------\n");
            // for(size_t i = 0; i < a.size(); i++)
            //     printf("%d\n",a[i]);
            // printf("------------\n");
            int count = 0;
            for (size_t i = 0; i <= a.size();i++)
            {
                for (size_t j = i+1; j <= a.size() -1; j++)
                {
                    // printf("\n-j%d\n",a[j]);
                    // printf("\n-i%d\n", a[i]);
                    // if (a[i] == a[j])
                    //     continue;
                    // printf("--%d\n", a[i] - a[j]);
                    if (a[j] - a[i] > count)
                        count = a[j] - a[i];
                }
            }
            // printf("------------%d\n", count);
            return count;

        }
        unsigned int shortestSpan()
        {
            // printf("------------\n");
            // for(size_t i = 0; i < a.size(); i++)
                // printf("%d\n",a[i]);
            // printf("------------\n");
// 
            std::sort(a.begin(), a.end());
            // printf("------------\n");
            // for(size_t i = 0; i < a.size(); i++)
                // printf("%d\n",a[i]);
            // printf("------------\n");
            int count = 0;
            int tmp = INT_MAX;

            for (size_t i = 0; i <= a.size();i++)
            {
                for (size_t j = i+1; j <= a.size() -1; j++)
                {
                    // printf("\n-j%d\n",a[j]);
                    // printf("\n-i%d\n", a[i]);
                    // if (a[i] == a[j])
                    //     continue;
                    // printf("--%d\n", a[i] - a[j]);
                    // if (a[j] - a[i] > count)
                    // {
                        // count = abs(a[j] - a[i]);
                    count = a[j] - a[i];

                    // }
                    if (count < tmp)
                        tmp = count;
                }
            }
            // printf("------------%d\n", count);
            return tmp;
        };

};

#endif