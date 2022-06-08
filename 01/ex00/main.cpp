#include "Zombie.hpp"

int	main()
{
	std::cout << "First Zombie" << std::endl;
	Zombie	zombie_1("1");

	std::cout << "Second Zombie" << std::endl;
	Zombie	*zombie_2 = newZombie("2");

	std::cout << "Third Zombie" << std::endl;
	randomChump("3");

	std::cout << "need to delete this one (pointer) -- ";
	delete zombie_2;
}
