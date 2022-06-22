#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	copy.attack("Proofreader");

	std::cout << KCYN << "***********BASIC TESTS WITH FRAGTRAP***********\n";
	FragTrap	serena("Serena");
	serena.highFivesGuys();
	serena.takeDamage(100);
	serena.beRepaired(12);

	return (0);
}
