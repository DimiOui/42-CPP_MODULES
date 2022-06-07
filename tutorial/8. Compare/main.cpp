#include <iostream>
#include "Sample.hpp"

int main()
{
	Sample	instance(31);
	Sample	instance2(31);

	if (&instance == &instance2)
		std::cout << "Same adress innit" << std::endl;
	else
		std::cout << "Yes, normal" << std::endl;
	if (instance.compare(&instance2) == 0)
		std::cout << "Numbers are equal" << std::endl;
	else
		std::cout << "Numbers are not equal" << std::endl;
	return (0);
}
