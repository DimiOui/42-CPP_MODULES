#include "Sample.hpp"
#include <iostream>

Sample::Sample(int const i) : food(i)
{
	std::cout << "Constructor called" << std::endl;

	this->foo = "Heyyyy I'm public.";
	std::cout << this->foo << std::endl;
	this->_privateFoo = "I'm private";
	std::cout << this->_privateFoo << std::endl;
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

void	Sample::_privateBar() const
{
	std::cout << "Private Member function called" << std::endl;
	return;
}
