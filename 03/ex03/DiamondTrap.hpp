#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
    DiamondTrap(const std::string name);
    DiamondTrap(DiamondTrap const &obj);
    virtual ~DiamondTrap();

    DiamondTrap &operator=(DiamondTrap const &obj);
    void        whoAmI();
    void        attack(const std::string &target);

private:
    std::string _name;

};

#endif
