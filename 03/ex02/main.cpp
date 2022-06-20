#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ScavTrap	joy("Joy");

	joy.attack("Proofreader");
	joy.takeDamage(49);
	joy.beRepaired(12);
	joy.guardGate();

	ScavTrap	copy(joy);
	copy.takeDamage(10);
	copy.attack("Proofreader");

	FragTrap	serena("Serena");
	serena.highFivesGuys();
	serena.takeDamage(100);
	serena.beRepaired(12);

	return (0);
}
