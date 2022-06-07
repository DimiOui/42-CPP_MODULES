#include "Sample.hpp"
#include <iostream>

Sample::Sample(int const i) : food(i)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::bar() const
{
	std::cout << "Member function called" << std::endl;

	//this->qd = 0;
	return;
}
