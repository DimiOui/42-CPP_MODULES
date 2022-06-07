#include <iostream>
#include "Sample.hpp"

int	main()
{
	std::cout << "nb instances : " << Sample::getNbInst() << std::endl;
	Sample	instance;
	std::cout << "nb instances : " << Sample::getNbInst() << std::endl;
	for (int i = 0; i < 3; i++)
	{
		Sample	instance;
		std::cout << "nb instances in for : " << Sample::getNbInst() << std::endl;
	}
return (0);
}

