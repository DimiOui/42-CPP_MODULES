#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

#pragma once

class Animal
{
public:
    Animal();
    Animal(Animal const &obj);
    virtual ~Animal();

    Animal              &operator=(Animal const &obj);
    virtual void        makeSound() const;
    std::string const   &getType() const;

protected:
    std::string         _type;
};

std::ostream    &operator<<(std::ostream &o, Animal const &i);

#endif
