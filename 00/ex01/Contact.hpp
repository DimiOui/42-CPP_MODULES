#ifndef CONTACT_HPP
#define CONTACT_HPP

#pragma once

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

class Contact
{
public:
    Contact();
    ~Contact();

    bool                        get_contact(int index);
    void                        print_contact();
    void                        print_contact_table();

private:
    int                         index;
    static std::string const    contact_head[5];
    std::string                 contact_input[5];

    enum data
    {
        First = 0,
        Last,
        Nick,
        Phone,
        Secret
    };
};

#endif
