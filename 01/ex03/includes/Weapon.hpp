#include <string>
#include <iostream>

#ifndef WEAPON_HPP
#define WEAPON_HPP

#pragma once

class Weapon
{
public:
    Weapon(std::string type);
    ~Weapon();

    std::string const   &getType();
    //void                setType(std::string const &newType);
private:
    std::string         _type;
};

#endif
