#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << KYEL << "Scavtrap " << this->_name << " just spawned!\n";
	std::cout << KRED << "HP : " << this->_hitPoints << std::endl;
	std::cout << KBLU << "FP : " << this->_energyPoints << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const &obj)
{
	*this = obj;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << KYEL << "Claptrap " << getName() << " copy called" << std::endl;
	return;
}

ScavTrap::~ScavTrap()
{
	std::cout << KYEL << "ScavTrap " << getName() << " despawned.\n";
	return;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &obj)
{
	this->_name = obj.getName();
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << KWHT << "ScavTrap " << getName() << " is guarding the gate." << std::endl;
	return;
}

void	ScavTrap::attack(const std::string &target)
{
	if (_hitPoints < 0)
		std::cout << KWHT << getName() << " is already dead..." << std::endl;
	else if (_energyPoints <= 0)
		std::cout << KWHT << getName() << " is too exhausted to do anything." << std::endl;
	else
	{
		this-> _energyPoints -= 1;
		std::cout << KWHT << getName() << " attacks " << target << " causing " << KRED;
		std::cout << this->_attackDamage << KWHT << " damage" << std::endl;
		std::cout << KRED << "HP : " << this->_hitPoints << std::endl;
		std::cout << KBLU << "FP : " << this->_energyPoints << std::endl;
	}
}
