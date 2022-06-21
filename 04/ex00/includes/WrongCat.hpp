#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

#pragma once

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const WrongCat &obj);
    virtual ~WrongCat();

    WrongCat     &operator=(WrongCat const &obj);
    void    makeSound() const;
};

#endif
