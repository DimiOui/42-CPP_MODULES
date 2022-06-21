#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat subclass constructor called." << std::endl;
	this->_type = "Cat";
	return;
}

Cat::Cat(Cat const &obj) : Animal()
{
	std::cout << "Cat subclass copy constructor called." << std::endl;
	*this = obj;
	return;
}

Cat::~Cat()
{
	std::cout << "Cat subclass destructor called." << std::endl;
	return;
}

Cat	&Cat::operator=(Cat const &obj)
{
	std::cout << "Assignement operator overload for Cat called" << std::endl;
	this->_type = obj.getType();
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
	return;
}
