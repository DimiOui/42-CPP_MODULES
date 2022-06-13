#include "Filestream.hpp"

int	pError(std::string errorMsg)
{
	std::cout << "Usage : ./Filestream filename s1 s2" << std::endl;
	return (1);
}

int	main(int ac, char **av)
{
	Filestream data;

	if (ac != 4)
		return (pError(""));
	if (!data.openFile(av[1]))
		return (pError(""));
	if (!data.replaceStr(av[2], av[3]))
		return (pError(""));
	return (0);
}
