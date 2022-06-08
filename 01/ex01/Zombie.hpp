#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

#pragma once

class Zombie
{
public:
    Zombie();
    ~Zombie();

    void            announce();
    void            getName(std::string name);

private:
    std::string     zName;
};

Zombie  *zombieHorde(int N, std::string name);

#endif
