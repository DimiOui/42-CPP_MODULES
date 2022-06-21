#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

#pragma once

class Dog : public AAnimal
{
public:
    Dog();
    Dog(Dog const &obj);
    virtual ~Dog();

    Dog             &operator=(Dog const &obj);
    virtual AAnimal &operator=(AAnimal const &obj);
    virtual void    makeSound() const;
    virtual Brain   *getBrain() const;

private:
    Brain           *_brain;
};

#endif
