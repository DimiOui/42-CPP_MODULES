#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

#pragma once

class Animal
{
public:
    Animal();
    Animal(Animal const &obj);
    virtual ~Animal();

    virtual Animal      &operator=(Animal const &obj);
    virtual void        makeSound() const = 0;
    virtual Brain       *getBrain() const = 0;
    std::string const   &getType() const;

protected:
    std::string         _type;
};

std::ostream    &operator<<(std::ostream &o, Animal const &i);

#endif
