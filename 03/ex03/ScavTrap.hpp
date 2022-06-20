#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(const std::string name);
    ScavTrap(ScavTrap const &obj);
    virtual ~ScavTrap();

    ScavTrap    &operator=(ScavTrap const &obj);
    void        attack(const std::string &target);
    void        guardGate();
};

#endif
