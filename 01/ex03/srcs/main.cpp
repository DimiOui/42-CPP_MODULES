#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon	club = Weapon("crude spiked club");

		HumanA	bob("Bob", club);
		std::cout << "Bob weapon: " << bob.printWeapon() << std::endl;
		std::cout << "Bob weapon address: " << &bob.printWeapon() << std::endl;
		std::cout << std::endl;

		bob.attack();
		club.setType("some other type of club");
		std::cout << "Bob weapon address after setType: " << &bob.printWeapon() << std::endl;
		bob.attack();
	}

	std::cout << std::endl;

	{
		Weapon	club = Weapon("crude spiked club");

		HumanB	jim("Jim");
		std::cout << "Jim weapon address at init: " << &jim.printWeapon() << std::endl;

		jim.setWeapon(club);
		std::cout << "Jim weapon address after setWeapon: " << &jim.printWeapon() << std::endl;
		jim.attack();
		club.setType("some other type of club");
		std::cout << "Jim weapon address after setTye: " << &jim.printWeapon() << std::endl;
		jim.attack();
	}
}
