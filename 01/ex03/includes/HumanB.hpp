#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

#pragma once

class HumanB
{
public:
    HumanB(std::string name);
    ~HumanB();

    void                attack() const;
    Weapon              &printWeaponAdd() const;
    std::string const   &printWeapon() const;
    bool                setWeapon(Weapon &newWeapon);
private:
    std::string         _name;
    Weapon              *_weapon;
};

#endif
