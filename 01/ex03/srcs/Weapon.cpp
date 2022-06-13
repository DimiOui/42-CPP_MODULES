#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon()
{
}

std::string const	&Weapon::getType()
{
	return (this->_type);
}

bool	Weapon::setType(std::string const &newType)
{
	if (newType != "")
		this->_type = newType;
	else
	{
		std::wcerr << "Give him a weapon !" << std::endl;
		return (false);
	}
	return (true);
}
