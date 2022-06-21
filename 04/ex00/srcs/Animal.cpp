#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal class constructor called." << std::endl;
	getType();
	return;
}

Animal::Animal(Animal const &obj)
{
	std::cout << "Animal class copy constructor called." << std::endl;
	*this = obj;
	return;
}

Animal::~Animal()
{
	std::cout << "Animal class destructor called." << std::endl;
	return;
}

Animal	&Animal::operator=(Animal const &obj)
{
	std::cout << "Assignment operator overload for Animal called." << std::endl;
	this->_type = obj.getType();
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << "Animal sound." << std::endl;
	return;
}

const std::string	&Animal::getType() const
{
	return (this->_type);
}

std::ostream	&operator<<(std::ostream &o, Animal const &rhs)
{
	o << rhs.getType();
	return o;
}
