#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>

#pragma once

template<typename T>
class Array
{
public:
    Array<T>() : _size(0), _array(NULL) {}
    Array<T>(size_t size) : _size(size), _array(new T[_size]) {}
    Array<T>(const Array<T> &src) : _size(src._size), _array(new T[src._size])
    {
        for (size_t i = 0; i != this->_size; ++i)
            this->_array[i] = src._array[i];
    }
    Array<T>    &operator=(const Array<T> &obj)
    {
        if (this != &obj)
        {
            if (this->_size > 0)
                delete [] this->_array;
            this->_size = obj.size();
            this->_array = new T[this->_size];
            for (size_t i = 0; i < this->_size; i++)
                this->_array[i] = obj[i];
        }
        return (*this);
    }
    T   &operator[](const size_t i) const
    {
        if (i >= this->_size || i < 0)
            throw wrongIndex();
        return (this->_array[i]);
    }
    ~Array<T>() {delete [] this->_array;}
    size_t size() const {return this->_size;}

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
