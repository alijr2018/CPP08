#ifndef EASYFIND_HPP
#define EASYFIND_HPP

// #include <exception>
#include <algorithm>

// class ex : public std::exception
// {
//     public:
//         class Not : public std::exception
//         {
//             public:
//                 const char* what() const throw()
//                 {
//                     return ("Not found");
//                 }
//         };
// };


// template <typename T>
template <typename T>
typename T::iterator easyfind(T &a, int b)
{
    typename T::iterator tmp = std::find(a.begin(), a.end(), b); //search more about this typename
    if (tmp != a.end())
        return tmp;
    // throw ex::Not(); // changed later to a return 
    return a.end();
}

#endif


