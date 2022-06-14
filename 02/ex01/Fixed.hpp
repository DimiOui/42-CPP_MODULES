#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

#pragma once

class Fixed
{
public:
    Fixed();
    Fixed(int const iVal);
    Fixed(float const fVal);
    Fixed(Fixed const &obj);
    virtual ~Fixed();

    Fixed               &operator=(Fixed const &obj);

    int                 getRawBits() const;
    void                setRawBits(int const raw);
    float               toFloat() const;
    int                 toInt() const;

private:
    int                 _fixedValue;
    static int const    _bitsFract = 8;

};

std::ostream    &operator<<(std::ostream &o, Fixed const &i);

#endif
