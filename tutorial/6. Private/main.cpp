#include <iostream>
#include "Sample.hpp"

int	main()
{
	Sample	instance(42);

	instance.foo ="Main modified";
	std::cout << "instance.foo: " << instance.foo << std::endl;
	std::cout << "instance.food: " << instance.food << std::endl;

	instance.bar();
	//instance._privateBar(); // can't compile because private.

	return 0;
}
