#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

#pragma once

class WrongAnimal
{
public:
    WrongAnimal();
    WrongAnimal(WrongAnimal const &obj);
    virtual ~WrongAnimal();

    WrongAnimal         &operator=(WrongAnimal const &obj);
    void                makeSound() const;
    std::string const   &getType() const;

protected:
    std::string         _type;
};

std::ostream    &operator<<(std::ostream &o, WrongAnimal const &i);

#endif

