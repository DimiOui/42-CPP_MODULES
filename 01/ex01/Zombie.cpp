#include "Zombie.hpp"

Zombie::Zombie()
{
	Zombie::getName(Zname);
}

Zombie::~Zombie()
{
	std::cout << Zombie::Zname << " died" << std::endl;
}

void	Zombie::announce()
{
	std::cout << Zombie::Zname << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::getName(std::string name)
{
	this->Zname = name;
}
