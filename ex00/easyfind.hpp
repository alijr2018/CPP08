#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
typename T::iterator easyfind(T &a, int b)
{
    return std::find(a.begin(), a.end(), b);
}

template <typename T>
typename T::const_iterator easyfind(const T &a, int b)
{
    return std::find(a.begin(), a.end(), b);
}

#endif


