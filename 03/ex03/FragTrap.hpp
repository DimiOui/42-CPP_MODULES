#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap();
    FragTrap(const std::string name);
    FragTrap(FragTrap const &obj);
    virtual ~FragTrap();

    FragTrap    &operator=(FragTrap const &obj);
    void        highFivesGuys();


};

#endif
