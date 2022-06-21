#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal class constructor called." << std::endl;
	getType();
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const &obj)
{
	*this = obj;
	std::cout << "WrongAnimal class copy constructor called." << std::endl;
	return;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal class destructor called." << std::endl;
	return;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &obj)
{
	std::cout << "Assignment operator overload for WrongAnimal called." << std::endl;
	this->_type = obj.getType();
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound." << std::endl;
	return;
}

const std::string	&WrongAnimal::getType() const
{
	return (this->_type);
}

std::ostream	&operator<<(std::ostream &o, WrongAnimal const &rhs)
{
	o << rhs.getType();
	return o;
}
