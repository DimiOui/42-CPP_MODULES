#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog subclass constructor called." << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	return;
}

Dog::Dog(Dog const &obj) : Animal()
{
	std::cout << "Dog subclass copy constructor called." << std::endl;
	*this = obj;
	return;
}

Dog::~Dog()
{
	std::cout << "Dog subclass destructor called." << std::endl;
	delete this->_brain;
	return;
}

Dog	&Dog::operator=(Dog const &obj)
{
	std::cout << "Assignement operator overload for Dog called" << std::endl;
	this->_type = obj.getType();
	*(this->_brain) = *(obj.getBrain());
	return *this;
}

Animal	&Dog::operator=(Animal const &obj)
{
	std::cout << "Animal Assignement operator overload for Dog called" << std::endl;
	this->_type = obj.getType();
	*(this->_brain) = *(obj.getBrain());
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
	return;
}

Brain	*Dog::getBrain() const
{
	return (this->_brain);
}
