#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

#pragma once

class Harl
{
    typedef struct levels
    {
        std::string cmd;
        void(Harl::*ptr)();
    }   t_levels;

public:
    Harl();
    ~Harl();

    void        complain(std::string level);

private:
    t_levels    lvl[4];
    void        debug();
    void        info();
    void        warning();
    void        error();
    void        defaultMsg();
};

#endif
