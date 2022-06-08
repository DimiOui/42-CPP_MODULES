#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
		Zombie	*zombieHorde = new Zombie[N];

		for (int i; i < N; i++)
		{
			zombieHorde[i].getName(name);
			zombieHorde[i].announce();
		}
		return (zombieHorde);
}

