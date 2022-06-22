#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	std::cout << KCYN << "***********BASIC TESTS WITH SCAVTRAP***********\n";
	ScavTrap	joy("Joy");

	joy.attack("Proofreader");
	joy.takeDamage(49);
	joy.beRepaired(12);
	joy.guardGate();

	std::cout << KCYN << "***********BASIC TESTS WITH COPY CONSTRUCTOR***********\n";
	ScavTrap	copy(joy);
	copy.takeDamage(10);

	std::cout << KCYN << "***********BASIC TESTS WITH OPERATOR SURCHARGE***********\n";
	ScavTrap	felix("Felix");
	felix.takeDamage(21);
	ScavTrap	twin = felix;
	twin.attack("Proofreader");
	twin.takeDamage(51);
	twin.beRepaired(21);
	return (0);
}
