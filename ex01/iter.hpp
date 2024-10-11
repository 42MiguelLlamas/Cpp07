#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void  iter (T *address, int length, void (*f)(T&))
{
    for (int i = 0; i < length; i++)
    {
        f(address[i]);
    }
}

template <typename T>
void print(T &element)
{
    std::cout << element << std::endl;
}

#endif