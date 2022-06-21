#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

#pragma once

class Dog : public Animal
{
public:
    Dog();
    Dog(Dog const &obj);
    virtual ~Dog();

    Dog     &operator=(Dog const &obj);
    void    makeSound() const;
};

#endif
