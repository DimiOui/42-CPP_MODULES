#include "ClapTrap.hpp"

int	main()
{
	std::cout << KCYN << "***********BASIC TESTS WITH CLAPTRAP***********\n";
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

	std::cout << KCYN << "***********BASIC TESTS WITH COPY CONSTRUCTOR***********\n";
	ClapTrap	copy(felix);
	copy.takeDamage(4);

	std::cout << KCYN << "***********BASIC TESTS WITH OPERATOR SURCHARGE***********\n";
	ClapTrap	alfred("Alfred");
	alfred.takeDamage(4);
	ClapTrap	twin = alfred;
	twin.attack("Proofreader");
	twin.takeDamage(5);
	twin.beRepaired(2);
	return (0);
}
