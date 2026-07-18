#include "MutantStack.hpp"
#include <vector>

int main()
{
    srand(time(NULL));

    int r1 = rand();
    int r2 = rand();
    int r3 = rand();
    int r4 = rand();
    MutantStack<int, std::vector<int> > mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(r1);
    mstack.push(r2);
    mstack.push(1058);
    mstack.push(r3);
    mstack.push(879);
    mstack.push(r4);
    mstack.push(0);
    const MutantStack<int, std::vector<int> > mstack2(mstack);
    MutantStack<int, std::vector<int> >::const_iterator it = mstack2.begin();
    ++it;
    --it;
    while (it != mstack2.end())
    {
        std::cout << *it << std::endl;
        ++it;
    }
    // -----
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
    std::cout << lst.back() << std::endl;
    lst.pop_back();
    std::cout << lst.size() << std::endl;
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(r1);
    lst.push_back(r2);
    lst.push_back(1058);
    lst.push_back(r3);
    lst.push_back(879);
    lst.push_back(r4);
    lst.push_back(0);

    std::list<int>::iterator lit = lst.begin();
    std::list<int>::iterator lite = lst.end();
    ++lit;
    --lit;
    while (lit != lite)
    {
        std::cout << *lit << std::endl;
        ++lit;
    }
    return 0;
}