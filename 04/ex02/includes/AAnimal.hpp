#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

#pragma once

class AAnimal
{
public:
    virtual ~AAnimal();

    virtual AAnimal     &operator=(AAnimal const &obj) = 0;
    virtual void        makeSound() const = 0;
    virtual Brain       *getBrain() const = 0;
    const std::string   &getType() const;

protected:
    std::string         _type;
};

std::ostream    &operator<<(std::ostream &o, AAnimal const &i);

#endif
