#include <iostream>
#include "Sample.hpp"

int main()
{
	Sample	instance;

	instance.setFoo(31);
	std::cout << "getFoo : " << instance.getFoo() << std::endl;
	instance.setFoo(-31);
}
