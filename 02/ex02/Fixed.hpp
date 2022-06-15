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

    Fixed               operator+(Fixed const &obj);
    Fixed               operator-(Fixed const &obj);
    Fixed               operator/(Fixed const &obj);
    Fixed               operator*(Fixed const &obj);

    Fixed               operator++(int);
    Fixed               &operator++();
    Fixed               operator--(int);
    Fixed               &operator--();

    bool                operator>(Fixed const &obj) const;
    bool                operator<(Fixed const &obj) const;
    bool                operator>=(Fixed const &obj) const;
    bool                operator<=(Fixed const &obj) const;
    bool                operator==(Fixed const &obj) const;
    bool                operator!=(Fixed const &obj) const;

    static Fixed        &min(Fixed &a, Fixed &b);
    static Fixed        &max(Fixed &a, Fixed &b);
    static Fixed const  min(Fixed const &a, Fixed const &b);
    static Fixed const  max(Fixed const &a, Fixed const &b);

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
