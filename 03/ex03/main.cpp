#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	std::cout << KCYN << "***********BASIC TESTS WITH DIAMONDTRAP***********\n";
	DiamondTrap	faith("faith");
	faith.attack("Proofreader");
	faith.takeDamage(22);
	faith.beRepaired(14);
	faith.takeDamage(200);
	faith.whoAmI();
	std::cout << std::endl;

	std::cout << KCYN << "***********BASIC TESTS WITH COPY CONSTRUCTOR//OP OVERLOAD***********\n";
	DiamondTrap gigi("Gigi");
	gigi.attack("Proofreader");
	gigi.takeDamage(15);
	gigi.whoAmI();

	std::cout << std::endl;
	DiamondTrap twin(gigi);
	twin.beRepaired(10);
	twin.whoAmI();

	std::cout << std::endl;
	DiamondTrap intruder = twin;
	intruder.takeDamage(82);
	intruder.whoAmI();
	std::cout << std::endl;
	//ScavTrap	joy("Joy");

	//joy.attack("Proofreader");
	//joy.takeDamage(49);
	//joy.beRepaired(12);
	//joy.guardGate();
	//std::cout << std::endl;

	//ScavTrap	copy(joy);
	//copy.takeDamage(10);
	//copy.attack("Proofreader");
	//std::cout << std::endl;

	//FragTrap	serena("Serena");
	//serena.highFivesGuys();
	//serena.takeDamage(100);
	//serena.beRepaired(12);
	//std::cout << std::endl;

	return (0);
}
