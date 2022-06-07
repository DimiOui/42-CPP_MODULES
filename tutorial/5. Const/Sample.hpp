#ifndef SAMPLE_HPP
#define SAMPLE_HPP

#include <string>

class Sample
{
public:

    std::string     foo;
    int const       food;

    Sample(int const i);
    ~Sample();

    void            bar() const;
private:

};

#endif
