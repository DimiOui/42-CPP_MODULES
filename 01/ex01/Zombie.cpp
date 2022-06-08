#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << Zombie::zName << " died" << std::endl;
}

void	Zombie::announce()
{
	std::cout << Zombie::zName << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::getName(std::string name)
{
	this->zName = name;
}
