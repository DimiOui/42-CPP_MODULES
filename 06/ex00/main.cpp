#include "Converter.hpp"

int	main(int ac, char **av)
{
	Converter	converter;

	try
	{
		if (ac == 1)
			throw (Converter::NoInput());
		else
			converter.convert(av[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::cerr << "Usage: ./convert <arg>" << std::endl;
	}
}
