#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10),
		_energyPoints(10), _attackDamage(0)
{
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
}

ClapTrap::~ClapTrap()
{
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &obj)
{
	this->_name = obj.getName();
	return (*this);
}

std::string	ClapTrap::getName() const
{
	return (this->_name);
}

void	ClapTrap::attack(const std::string &target)
{
}

void	ClapTrap::takeDamage(unsigned int amount)
{
}

void	ClapTrap::beRepaired(unsigned int amount)
{
}

std::ostream	&operator<<(std::ostream &o, ClapTrap const &rhs)
{
	o << rhs.getName();
	return o;
}
