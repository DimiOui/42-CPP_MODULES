#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat subclass constructor called." << std::endl;
	this->_type = "WrongCat";
	return;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal()
{
	std::cout << "WrongCat subclass copy constructor called." << std::endl;
	*this = obj;
	return;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat subclass destructor called." << std::endl;
	return;
}

WrongCat	&WrongCat::operator=(WrongCat const &obj)
{
	std::cout << "Assignement operator overload for WrongCat called" << std::endl;
	this->_type = obj.getType();
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "ALKsdJLASkdjL" << std::endl;
	return;
}
