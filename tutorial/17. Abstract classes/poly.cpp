#include <string>
#include <iostream>

class	ACharacter // This is an Abstract class
{
private:
	std::string		_name;
public:
	virtual void	attack(std::string const &target) = 0;
	void			sayHello(std::string const &target);
};

class	Warrior : public ACharacter
{
public:
	virtual void	attack(std::string const &target);
};

void	ACharacter::sayHello(std::string const &target)
{
	std::cout << "Hello " << target << std::endl;
}

void	Warrior::attack(std::string const &target)
{
	std::cout << "*attacks" << target << " with a sword*" << std::endl;
}

//class ICoffeMaker // This is an interface
//{
//public:
//	virtual void		fillWaterTank(IWaterSource *src) = 0;
//	virtual	ICoffee		*makeCoffee(std::string const &type) = 0;
//};

int	main()
{
	ACharacter	*a = new Warrior();

	a->sayHello("student");
	a->attack("student");
}
