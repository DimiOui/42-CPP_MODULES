#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>

#pragma once

template<typename T>
class Array
{
public:
    Array<T>() : _size(0), _array(NULL) {};
    Array<T>(unsigned int size) : _size(size)
    {
        this->_size = size;
        if (size < 0)
            throw wrongIndex();
        this->_array = new T[size];
    }
    Array<T>(const Array<T> &src) {*this = src;}
    Array<T>    &operator=(const Array<T> &obj)
    {
        if (this != &obj)
        {
            if (this->_size > 0)
                delete [] this->_array;
            this->_size = obj.size();
            this->_array = new T[this->_size];
            for (unsigned int i = 0; i < this->_size; i++)
                this->_array[i] = obj[i];
        }
        return (*this);

    }
    T   &operator[](const unsigned int i) const
    {
        if (i >= this->_size || i < 0)
            throw wrongIndex();
        return (this->_array[i]);
    }
    ~Array<T>() { delete [] this->_array;}

    unsigned int    size() const {return this->_size;}

    class wrongIndex: public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return ("Index is out of bounds.");
        }
    };

private:
    int _size;
    T   *_array;
};

#endif
