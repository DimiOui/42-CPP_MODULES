#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#pragma once

class Cat : public Animal
{
public:
    Cat();
    Cat(Cat const &obj);
    virtual ~Cat();

    Cat             &operator=(Cat const &obj);
    virtual Animal  &operator=(Animal const &obj);
    virtual void    makeSound() const;
    virtual Brain   *getBrain() const;

private:
    Brain           *_brain;
};

#endif
