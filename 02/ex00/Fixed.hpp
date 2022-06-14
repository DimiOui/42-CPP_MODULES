#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

#pragma once

class Fixed
{
public:
    Fixed();
    Fixed(Fixed const &obj);
    virtual ~Fixed();

    Fixed               &operator=(Fixed const &obj);

    int                 getRawBits() const;
    void                setRawBits(int const raw);

private:
    int                 _fixedValue;
    static int const    _bitsFract = 8;

};

#endif
