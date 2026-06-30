#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <algorithm>
#include <stack>
template <typename T>

class MutantStack: public std::stack<T> //begin and end reverse being reverse end
{
    std::stack a;
};

#endif