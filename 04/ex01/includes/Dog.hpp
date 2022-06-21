#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#pragma once

class Dog : public Animal
{
public:
    Dog();
    Dog(Dog const &obj);
    virtual ~Dog();

    Dog             &operator=(Dog const &obj);
    virtual Animal  &operator=(Animal const &obj);
    virtual void    makeSound() const;
    virtual Brain   *getBrain() const;

private:
    Brain           *_brain;
};

#endif
