#include <iostream>
#include "Sample.hpp"

int	main()
{
	Sample	instance(42);

	instance.foo ="Coucou";
	std::cout << "instance.foo: " << instance.foo << std::endl;
	std::cout << "instance.food: " << instance.food << std::endl;

	instance.bar();

	return 0;
}
