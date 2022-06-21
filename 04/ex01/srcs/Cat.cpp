#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat subclass constructor called." << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
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
	delete this->_brain;
	return;
}

Cat	&Cat::operator=(Cat const &obj)
{
	std::cout << "Assignement operator overload for Cat called" << std::endl;
	this->_type = obj.getType();
	*(this->_brain) = *(obj.getBrain());
	return *this;
}

Animal	&Cat::operator=(Animal const &obj)
{
	std::cout << "Animal Assignement operator overload for Cat called" << std::endl;
	this->_type = obj.getType();
	*(this->_brain) = *(obj.getBrain());
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
	return;
}

Brain	*Cat::getBrain() const
{
	return (this->_brain);
}
