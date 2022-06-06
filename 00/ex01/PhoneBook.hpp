#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#pragma once

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

//COLORS

#define KNRM "\x1B[0m"
#define KRED "\x1B[31m"
#define KGRN "\x1B[32m"
#define KYEL "\x1B[33m"
#define KBLU "\x1B[34m"
#define KMAG "\x1B[35m"
#define KCYN "\x1B[36m"
#define KWHT "\x1B[37m"

class PhoneBook
{
public:
    PhoneBook();
    ~PhoneBook();

    void    run();
    void    add_contact();
    void    header();
    bool    search_contact();

private:
    Contact contacts[8];
    int     contact_count;
    int     iter;

};

#endif
