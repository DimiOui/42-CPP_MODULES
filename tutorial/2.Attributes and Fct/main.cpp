#include <iostream>
#include "Sample.hpp"

int	main()
{
	Sample	instance;

	instance.food = 52;
	std::cout << "food: " << instance.food << std::endl;
	std::cout << "foo: " << instance.foo << std::endl;
	printf("Oups again : ");
	instance.bar();

	return 0;
}
