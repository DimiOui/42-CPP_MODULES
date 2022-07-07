#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <limits>
#include <cctype>
#include <stdexcept>
#include <cmath>

#define KNRM "\x1B[0m"
#define KRED "\x1B[31m"
#define KGRN "\x1B[32m"
#define KYEL "\x1B[33m"
#define KBLU "\x1B[34m"
#define KMAG "\x1B[35m"
#define KCYN "\x1B[36m"
#define KWHT "\x1B[37m"

#pragma once

class Converter
{
public:
    Converter();
    Converter(Converter const &obj);
    virtual ~Converter();

    Converter   &operator=(Converter const &obj);
    void        convert(char *input);
    int         getType(const char *toConvert);
    std::string getInput();

    enum    types
    {
        toChar,
        toInt,
        toFloat,
        toDouble,
        toOther
    };

private:
    std::string _input;
    void        convToChar();
    void        convToInt();
    void        convToFloat();
    void        convToDouble();
    void        convToOther();

public:
    class NoInput : public std::exception
    {
    public:
        virtual const char* what() const throw();
    };
};

#endif
