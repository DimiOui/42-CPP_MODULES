#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	felix("Felix");

	felix.attack("Proofreader");
	felix.takeDamage(6);
	felix.beRepaired(1);
	felix.beRepaired(3);
	felix.attack("Proofreader");
	felix.attack("Proofreader");
	felix.attack("Proofreader");
	felix.takeDamage(5);
	felix.takeDamage(2);
	felix.beRepaired(1);
	felix.attack("Proofreader");
	felix.beRepaired(3);
	felix.attack("Proofreader");
	felix.beRepaired(1);
	felix.attack("Proofreader");
	felix.takeDamage(10000);
	felix.beRepaired(1);
	felix.attack("Proofreader");

	ClapTrap	copy(felix);
	copy.takeDamage(4);

	return (0);
}
