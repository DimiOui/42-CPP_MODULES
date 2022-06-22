#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << Zombie::_name << " died" << std::endl;
}

void	Zombie::announce()
{
	std::cout << Zombie::_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::getName(std::string name)
{
	this->_name = name;
}
