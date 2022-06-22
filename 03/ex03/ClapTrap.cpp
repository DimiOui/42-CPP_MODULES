#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10),
		_energyPoints(10), _attackDamage(0)
{
	std::cout << KYEL << "Claptrap " << this->_name << " just spawned!\n";
	std::cout << KRED << "HP : " << this->_hitPoints << std::endl;
	std::cout << KBLU << "FP : " << this->_energyPoints << std::endl;
	return;
}

ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << KMAG << "Default ClapTrap called!" << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const &obj) : _hitPoints(10),
		 _energyPoints(10), _attackDamage(0)
{
	*this = obj;
	std::cout << KYEL << "Claptrap " << this->_name << " copy called" << std::endl;
	return;
}

ClapTrap::~ClapTrap()
{
	std::cout << KMAG << "Default Claptrap " << this->_name << " despawned.\n";
	return;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &obj)
{
	this->_name = obj.getName();
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	return (*this);
}

std::string	ClapTrap::getName() const
{
	return (this->_name);
}

void	ClapTrap::attack(const std::string &target)
{
	if (_hitPoints < 0)
		std::cout << KWHT << this->_name << " is already dead..." << std::endl;
	else if (_energyPoints <= 0)
		std::cout << KWHT << this->_name << " is too exhausted to do anything." << std::endl;
	else
	{
		this-> _energyPoints -= 1;
		std::cout << KWHT << this->_name << " attacks " << target << " causing " << this->_attackDamage;
		std::cout << " amount of damage. (this is not really effective)\n";
		std::cout << KRED << "HP : " << this->_hitPoints << std::endl;
		std::cout << KBLU << "FP : " << this->_energyPoints << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		this->_hitPoints -= amount;
		std::cout << KWHT << this->_name << " took " << KRED << amount
				<< KWHT << " points of damage.\n";
	}
	if (this->_hitPoints <= 0)
		std::cout << KRED << this->_name << " is dead :C" << std::endl;
	else
	{
		std::cout << KRED << "HP : " << this->_hitPoints << std::endl;
		std::cout << KBLU << "FP : " << this->_energyPoints << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints <= 0)
			std::cout << KWHT << this->_name << " is already dead..." << std::endl;
	else if (_energyPoints <= 0)
		std::cout << KWHT << this->_name << " is too exhausted to do anything." << std::endl;
	else
	{
		this->_energyPoints -= 1;
		this->_hitPoints += amount;
		std::cout << KGRN << this->_name << " just repaired himself!" << std::endl;
		std::cout << KRED << "HP : " << this->_hitPoints << std::endl;
		std::cout << KBLU << "FP : " << this->_energyPoints << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &o, ClapTrap const &rhs)
{
	o << rhs.getName();
	return o;
}
