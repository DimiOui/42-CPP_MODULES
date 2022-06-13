#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack() const
{
	std::cout << this->_name << " attacks with " << this->_weapon.getType() << "\n";
}

Weapon	&HumanA::printWeaponAdd() const
{
	return (this->_weapon);
}

std::string const	&HumanA::printWeapon() const
{
	return (this->_weapon.getType());
}
