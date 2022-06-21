#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

#pragma once

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat &obj);
    virtual ~Cat();

    Cat     &operator=(Cat const &obj);
    void    makeSound() const;
};

#endif
