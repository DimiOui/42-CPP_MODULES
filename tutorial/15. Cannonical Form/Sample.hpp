#ifndef SAMPLE_HPP
#define SAMPLE_HPP

#include <iostream>

#pragma once

class Sample
{
public:
    Sample();                               //CANONICAL
    Sample(Sample const &obj);              //CANONICAL
    virtual ~Sample();                      //CANONICAL

    Sample  &operator=(Sample const &rhs);  //CANONICAL
    int     getFoo() const;

private:
    int     _foo;
};

std::ostream    &operator<<(std::ostream &o, Sample const &i);

#endif

