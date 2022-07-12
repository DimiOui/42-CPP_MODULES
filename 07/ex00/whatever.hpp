#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <iomanip>

#pragma once

template <typename T>
void    swap(T &x, T &y)
{
    T   tmp = x;
    x = y;
    y = tmp;
}

template <typename T>
const T &min(T const &x, T const &y)
{
    return (x < y ? x : y);
}

template <typename T>
const T &max(T const &x, T const &y)
{
    return (x > y ? x : y);
}

#endif
