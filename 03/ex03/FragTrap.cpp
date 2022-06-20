#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 20;
	std::cout << KYEL << "Fragtrap " << this->_name << " just spawned!\n";
	std::cout << KRED << "HP : " << this->_hitPoints << std::endl;
	std::cout << KBLU << "FP : " << this->_energyPoints << std::endl;
	return;
}

FragTrap::FragTrap()
{
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Default FragTrap called." << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const &obj)
{
	*this = obj;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << KYEL << "Fragtrap " << getName() << " copy called" << std::endl;
	return;
}

FragTrap::~FragTrap()
{
	std::cout << KYEL << "FragTrap " << getName() << " despawned.\n";
	return;
}

FragTrap	&FragTrap::operator=(FragTrap const &obj)
{
	this->_name = obj.getName();
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	std::cout << KNRM << "HIGH FIVE!" << std::endl;
	return;
}
