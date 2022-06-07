#include "Sample.hpp"

#include <iostream>

Sample::Sample()
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

bool	Sample::setFoo(int v)
{
	if (v >= 0)
	{
		this->_foo = v;
		return (true);
	}
	else
	{
		std::cout << "Error" << std::endl;
		return (false);
	}
}
