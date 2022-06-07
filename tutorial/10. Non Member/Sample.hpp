#ifndef SAMPLE_HPP
#define SAMPLE_HPP

#pragma once

class Sample
{
public:
    Sample();
    ~Sample();

    static int  getNbInst();

private:

    static int  _nbInst;
};

#endif
