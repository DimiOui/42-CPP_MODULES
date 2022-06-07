#include "Sample.hpp"
#include <iostream>

Sample::Sample()
{
	std::cout << "Constructor called" << std::endl;
	for (int i = 0; i < 2; i++)
	{
		this->foo = "Innit ?";
		std::cout << "foo is :" << this->foo << std::endl;
	}
	printf("La fonction membre ici\n");
	this->bar();
	this->foo = "Enfin voilà";
	return;
}

Sample::~Sample()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::bar()
{
	std::cout << "Member function called" << std::endl;
	return;
}
