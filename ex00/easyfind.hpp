#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
// template <typename T>
template <typename T>
T easyfind(T a, int b)// if T is container
{
    // for (int i = 0; i < a.size(); i++)
    // {
        // if (a[i] == b)
        if (find(a.begin(), a.end(), b) != a.end())
            return find(a.begin(), a.end(), b); // should return an iterator???
    // }
    throw ;
}

#endif