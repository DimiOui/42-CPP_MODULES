#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

#pragma once

class Zombie
{
public:
    Zombie(std::string name);
    ~Zombie();

    void            announce() const;
    void            getName() const;

private:
    std::string     Zname;
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif
