#include "Sample.hpp"

#include <iostream>

Sample::Sample(int v) : _foo(v)
{
	std::cout << "Constructor called" << std::endl;
	return;
}
Sample::~Sample()
{
	std::cout << "Destructor Called" << std::endl;
	return;
}

int		Sample::getFoo() const
{
	return this->_foo;
}

int		Sample::compare(Sample *other) const
{
	if (this->_foo < other->getFoo())
		return (-1);
	else if (this->_foo > other->getFoo())
		return (1);
	return (0);
}
