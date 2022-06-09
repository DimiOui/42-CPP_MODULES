#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

#pragma once

class HumanA
{
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();

    void            attack() const;
    Weapon          &getWeapon() const;
private:
    std::string     _name;
    Weapon          &_weapon;
};

#endif
