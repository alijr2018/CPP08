#ifndef EASYFIND_HPP
#define EASYFIND_HPP

template <typename T>
T easyfind(T a, int b)// if T is container
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return a[i]; // pr return i???
    }
}

#endif