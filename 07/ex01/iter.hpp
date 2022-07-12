#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <iomanip>

#pragma once

template<typename T>
void    iter(T *array, int size, void (*fct)(T &_))
{
    if (!array)
        return;
    for (int i = 0; i < size; i++)
        fct(array[i]);
}

#endif
