#include "easyfind.hpp"
# include <vector>
# include <list>
# include <deque>
# include <iostream>

int main()
{
    
    std::vector<int> v;
    std::list<int> lst;
    std::deque<int> dq;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);

    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    lst.push_back(4);
    lst.push_back(5);
    lst.push_back(6);
    lst.push_back(7);
    lst.push_back(8);

    const std::vector<int> c_v(v);

    std::vector<int>::iterator it;
    std::list<int>::iterator it1;
    it = easyfind(v, 1000);
    if (it == v.end())
    {
        std::cout << "Error Not found\n";
        return 1;
    }
    // ++it;
    std::cout << *it << std::endl;
}