#include "easyfind.hpp"

int main()
{
    std::vector<int> v;

    for (int i = 0; i < 10; i++)
        v.push_back(i);


    std::vector<int>::iterator it;
    it = easyfind(v, 2);

    if (it != v.end())
    {
        std::cout << *it << std::endl;
    }
    else
    {
        std::cout << "Error Not found" << std::endl;
        return 1;
    }

    return 0;
}