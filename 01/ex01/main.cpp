#include "Zombie.hpp"

int	main()
{
	std::cout << "Zombie Horde incoming ..." << std::endl;
	Zombie	*zombieHorde_1 = zombieHorde(4, "Alphonse");

	delete [] zombieHorde_1;
}
