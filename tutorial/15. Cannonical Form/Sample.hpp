#ifndef SAMPLE_HPP
#define SAMPLE_HPP

#include <iostream>

#pragma once

class Sample
{
public:
    Sample();                               //CANONICAL : constructeur
    Sample(Sample const &obj);              //CANONICAL : constructeur par copie
    virtual ~Sample();                      //CANONICAL : destructeur

    Sample  &operator=(Sample const &rhs);  //CANONICAL : surcharge d'opérateur (d'assignation/d'affectation)
    int     getFoo() const; // accesseur

private:
    int     _foo;
};

std::ostream    &operator<<(std::ostream &o, Sample const &i); // surcharge de redirection

#endif

