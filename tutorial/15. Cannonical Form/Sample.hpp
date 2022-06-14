#ifndef SAMPLE_HPP
#define SAMPLE_HPP

#pragma once

class Sample
{
public:
    Sample();
    Sample(Sample const &obj);
    virtual ~Sample();

    Sample  &operator=(Sample const &rhs);
private:

};

#endif

