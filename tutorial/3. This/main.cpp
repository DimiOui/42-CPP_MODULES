#include <iostream>
#include "Sample.hpp"

int	main()
{
	Sample	instance;

	instance.foo ="Coucou";
	instance.food = 52;
	std::cout << "instance.foo: " << instance.foo << std::endl;
	std::cout << "instance.food: " << instance.food << std::endl;

	instance.bar();

	return 0;
}
