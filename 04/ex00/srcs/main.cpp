#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
	std::cout << "---------BASIC TESTS---------" << std::endl;
	const Animal	*meta = new Animal();
	const Animal	*i = new Dog();
	const Animal	*j = new Cat();

	std::cout << "Default Animal does ";
	meta->makeSound();
	std::cout << i->getType() << " does ";
	i->makeSound();
	std::cout << j->getType() << " does ";
	j->makeSound();

	delete meta;
	delete i;
	delete j;

	std::cout << std::endl;

	std::cout << "---------WRONG TESTS---------" << std::endl;
	const WrongAnimal	*metaWrong = new WrongAnimal();
	const WrongAnimal	*iWrong = new WrongCat();

	std::cout << "Default Wrong animal does ";
	metaWrong->makeSound();
	std::cout << iWrong->getType() << " does ";
	iWrong->makeSound();

	delete metaWrong;
	delete iWrong;
	return (0);
}
