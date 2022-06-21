#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

#pragma once

class Cat : public AAnimal
{
public:
    Cat();
    Cat(Cat const &obj);
    virtual ~Cat();

    Cat             &operator=(Cat const &obj);
    virtual AAnimal &operator=(AAnimal const &obj);
    virtual void    makeSound() const;
    virtual Brain   *getBrain() const;

private:
    Brain           *_brain;
};

#endif
