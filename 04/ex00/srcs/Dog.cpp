#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog subclass constructor called." << std::endl;
	this->_type = "Dog";
	return;
}

Dog::Dog(const Dog &obj) : Animal()
{
	std::cout << "Dog subclass copy constructor called." << std::endl;
	*this = obj;
	return;
}

Dog::~Dog()
{
	std::cout << "Dog subclass destructor called." << std::endl;
	return;
}

Dog	&Dog::operator=(Dog const &obj)
{
	std::cout << "Assignement operator overload for Dog called" << std::endl;
	this->_type = obj.getType();
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Ouaf" << std::endl;
	return;
}
