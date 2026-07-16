#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <algorithm>
#include <stack>
#include <deque>
#include <iostream>

template <typename T>
class MutantStack: public std::stack<T> 
{
    public:
        typedef typename std::deque<T>::iterator iterator;
        typedef typename std::deque<T>::reverse_iterator reverse_iterator;
        MutantStack(): std::stack<T>(){}
        MutantStack(const MutantStack &i):std::stack<T>(i){};
        MutantStack& operator=(const MutantStack &o)
        {
            std::stack<T>::operator=(o);
            return *this;
        };
        ~MutantStack() {};
        iterator begin()
        {
            return (this->c.begin());
        };
        reverse_iterator rbegin()
        {
            return (this->c.rbegin());
        };
        iterator end()
        {
            return (this->c.end());
        };
        reverse_iterator rend()
        {
            return (this->c.rend());
        };
};

#endif

