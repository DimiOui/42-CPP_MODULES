#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#pragma once

class FragTrap : public ClapTrap
{
public:
    FragTrap(const std::string name);
    FragTrap(FragTrap const &obj);
    virtual ~FragTrap();

    FragTrap    &operator=(FragTrap const &obj);
    void        highFivesGuys();
};

#endif
