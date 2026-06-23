#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
// template <typename T>
template <typename T>
typename T::iterator easyfind(T &a, int b)
{
    typename T::iterator tmp = find(a.begin(), a.end(), b); //search more about this typename
    if (tmp != a.end())
        return tmp;
    throw ;
}

#endif