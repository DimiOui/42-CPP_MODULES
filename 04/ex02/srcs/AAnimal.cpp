#include "AAnimal.hpp"

AAnimal::~AAnimal()
{
	std::cout << "Animal class destructor called." << std::endl;
	return;
}

std::string const	&AAnimal::getType() const
{
	return (this->_type);
}

std::ostream	&operator<<(std::ostream &o, AAnimal const &rhs)
{
	o << rhs.getType();
	return o;
}
