#ifndef SAMPLE_HPP
#define SAMPLE_HPP


class Sample
{
public:
    Sample(int v);
    ~Sample();

    int     getFoo() const;
    int    compare(Sample *other) const;

private:

    int     _foo;

};

#endif
