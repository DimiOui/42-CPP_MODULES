#include "iter.hpp"

template<typename T>
void	display(T &toPrint)
{
	std::cout << toPrint;
}

void	multiply(int &i)
{
	i = i * 2;
}

int	main()
{
	std::string	strArray[] {"Hi ", "I'm ", "Dimi !"};
	int			intArray[] {1, 2, 3};

	::iter<std::string>(strArray, 3, &display);
	std::cout << std::endl;
	::iter<int>(intArray, 3, multiply);
	std::cout << intArray[0] << ' ' << intArray[1] << ' ' << intArray[2] << std::endl;
	return (0);
}
