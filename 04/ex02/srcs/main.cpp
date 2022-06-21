#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#define KGRN "\x1B[32m"
#define KNRM "\x1B[0m"
#define KYEL "\x1B[33m"

int	main()
{
	AAnimal	*cat = new Cat();
	Brain	*brain;

	brain = cat->getBrain();
	brain->ideas[0] = "That bird over here seems yummy...";

	std::cout << KYEL << cat->getType() << " is thinking .o(";
	std::cout << cat->getBrain()->ideas[0] << ") " << KNRM;
	cat->makeSound();

	AAnimal	*cat2 = new Cat();
	*cat2 = *cat;

	std::cout << KYEL << "Copy" << cat2->getType() << " is thinking .o(";
	std::cout << cat2->getBrain()->ideas[0] << ") " << KNRM;
	cat2->makeSound();

	AAnimal *hound[8];
	for (int i = 0; i < 8; i++)
	{
		if (i == 0)
			hound[i] = cat;
		else if (i == 1)
			hound[i] = cat2;
		else if (i < 4)
			hound[i] = new Cat();
		else
			hound[i] = new Dog();
		std::cout << KGRN << hound[i]->getType() << KNRM << std::endl;
	}
	for (int i = 4; i < 8; i++)
	{
		brain = hound[i]->getBrain();
		brain->ideas[i] = "I want to bark for no reason!";
		std::cout << KYEL << hound[i]->getType() << " is thinking of .o(";
		std::cout << hound[i]->getBrain()->ideas[i] << ") " << KNRM;
		hound[i]->makeSound();
	}
	for (int i = 0; i < 8; i++)
		delete hound[i];
	return (0);
}
