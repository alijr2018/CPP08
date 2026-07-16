#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <algorithm>
#include <stack>
#include <deque>
#include <iostream>

//begin and end reverse being reverse end
template <typename T>
class MutantStack: public std::stack<T> 
{
    public:
        typedef typename std::deque<T>::iterator iterator;
        typedef typename std::deque<T>::reverse_iterator reverse_iterator;
        MutantStack();
        MutantStack(const MutantStack &i);
        MutantStack& operator=(const MutantStack &o);
        ~MutantStack();
        iterator begin();
        reverse_iterator rbegin();
        iterator end();
        reverse_iterator rend();
};
#include "MutantStack.tpp"

#endif

