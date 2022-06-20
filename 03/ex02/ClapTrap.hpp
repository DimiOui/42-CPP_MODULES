#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

#pragma once

#define KNRM "\x1B[0m"
#define KRED "\x1B[31m"
#define KGRN "\x1B[32m"
#define KYEL "\x1B[33m"
#define KBLU "\x1B[34m"
#define KMAG "\x1B[35m"
#define KCYN "\x1B[36m"
#define KWHT "\x1B[37m"

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

protected:
    ClapTrap();
    std::string _name;
    int         _hitPoints;
    int         _energyPoints;
    int         _attackDamage;
};

std::ostream    &operator<<(std::ostream &o, ClapTrap const &i);

#endif
