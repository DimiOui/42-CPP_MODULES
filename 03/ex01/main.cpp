#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	joy("Joy");

	joy.attack("Proofreader");
	joy.takeDamage(49);
	joy.beRepaired(12);
	joy.guardGate();

	ScavTrap	copy(joy);
	copy.takeDamage(10);

	return (0);
}
