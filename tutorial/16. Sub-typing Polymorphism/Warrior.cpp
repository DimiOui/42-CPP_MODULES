#include <string>
#include <iostream>

class	Character
{
public:
	//void	sayHello(std::string const &target);
	virtual void	sayHello(std::string const &target);
};

class	Warrior : public Character
{
public:
	void	sayHello(std::string const &target);
};

class	Mage : public Character
{
public:
	void	sayHello(std::string const &target);
};

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

void	Character::sayHello(std::string const &target)
{
	std::cout << "Hello " << target << " !" << std::endl;
}

void	Warrior::sayHello(std::string const &target)
{
	std::cout << "Fuck off " << target << " !" << std::endl;
}

void	Mage::sayHello(std::string const &target)
{
	std::cout << "Power to u " << target << " !" << std::endl;
}

int	main()
{
	Character	*a = new Mage();
	Character	*b = new Warrior();

	a->sayHello("student");
	b->sayHello("student");

	return (0);
}
