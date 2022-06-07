#ifndef SAMPLE_HPP
#define SAMPLE_HPP


class Sample
{
public:
    Sample();
    ~Sample();

    int     getFoo() const;
    bool    setFoo(int v);

private:

    int     _foo;

};

#endif
