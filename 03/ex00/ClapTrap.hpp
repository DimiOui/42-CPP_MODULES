#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

#pragma once

class ClapTrap
{
public:
    ClapTrap(const std::string name);
    ClapTrap(ClapTrap const &obj);
    virtual ~ClapTrap();

    ClapTrap    &operator=(ClapTrap const &obj);
    std::string getName() const;
    void        attack(const std::string &target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);

private:
    std::string _name;
    int         _hitPoints;
    int         _energyPoints;
    int         _attackDamage;
};

std::ostream    &operator<<(std::ostream &o, ClapTrap const &i);

#endif
