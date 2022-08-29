#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <exception>
#include <iterator>

#define KNRM "\x1B[0m"
#define KRED "\x1B[31m"
#define KGRN "\x1B[32m"
#define KYEL "\x1B[33m"
#define KBLU "\x1B[34m"
#define KMAG "\x1B[35m"
#define KCYN "\x1B[36m"
#define KWHT "\x1B[37m"

#pragma once

class Span
{
public:
    Span(unsigned int const &size = 0);
    Span(Span const &obj);
    virtual ~Span();

    Span                &operator=(Span const &obj);
    void                addNumber(unsigned int &n);
    void                addByItRange(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);
    unsigned int        shortestSpan() const;
    unsigned int        longestSpan() const;
    unsigned int        getMaxSize(void) const;
    unsigned int        getSize(void) const;
    std::vector<int>    getNumbers(void) const;
    void printVect() const;

private:
    unsigned int        _size;
    std::vector<int>    _numbersVect;

};

std::ostream    &operator<<(std::ostream &o, Span const &i);

#endif
