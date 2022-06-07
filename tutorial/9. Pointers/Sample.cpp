#include <iostream>
#include "Sample.hpp"

Sample::Sample() : foo(0)
{
	std::cout << "constructor called" << std::endl;
	return;
}

Sample::~Sample()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::bar() const
{
	std::cout << "Bar called" << std::endl;
	return;
}
