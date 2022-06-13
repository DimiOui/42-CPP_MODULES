#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack() const
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with " << this->_weapon->getType() << "\n";
	else
		std::cout << this->_name << " doesn't have a weapon " << std::endl;
}

bool	HumanB::setWeapon(Weapon &newWeapon)
{
	if (newWeapon.getType() != "")
		this->_weapon = &newWeapon;
	else
	{
		std::cerr << "Give him a weapon !" << std::endl;
		return (false);
	}
	return (true);
}

Weapon	&HumanB::printWeaponAdd() const
{
	return *(this->_weapon);
}

std::string const	&HumanB::printWeapon() const
{
	return (this->_weapon->getType());
}
