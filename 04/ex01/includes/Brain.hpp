#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

#pragma once

class Brain
{
public:
    Brain();
    Brain(Brain const &obj);
    ~Brain();

    Brain               &operator=(Brain const &obj);\
    std::string         ideas[100];
};

#endif
