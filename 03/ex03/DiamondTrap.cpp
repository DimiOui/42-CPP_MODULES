#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string name)
{
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << KCYN << "Diamondtrap " << this->_name << " just spawned!\n";
	std::cout << KRED << "HP : " << this->_hitPoints << std::endl;
	std::cout << KBLU << "FP : " << this->_energyPoints << std::endl;
	return;
}

DiamondTrap::DiamondTrap(DiamondTrap const &obj)
{
	*this = obj;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << KCYN << "Diamondtrap " << getName() << " copy called" << std::endl;
	return;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << KCYN << "DiamondTrap " << getName() << " despawned.\n";
	return;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &obj)
{
	this->_name = obj.getName();
	return (*this);
}

void		DiamondTrap::whoAmI()
{
	std::cout << KCYN << "I am " << this->_name << " and my ClapTrap name is "
		<< ClapTrap::_name << std::endl;
}

void		DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
