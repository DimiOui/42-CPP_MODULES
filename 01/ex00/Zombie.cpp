#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
	Zombie::getName();
	Zombie::announce();
}

Zombie::~Zombie()
{
	std::cout << Zombie::name << " died" << std::endl;
}

void	Zombie::announce() const
{
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::getName() const
{
	std::cout << this->name;
}
