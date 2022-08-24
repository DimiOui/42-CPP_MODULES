#include "easyfind.hpp"

int	main()
{
	std::vector<int>			v1;
	std::vector<int>			v2;
	std::vector<int>::iterator	result;

	for (int i = 0; i < 20; i += 2)
		v1.push_back(i);

	try
	{
		result = easyfind(v1, 4);
		display(result, v1.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << "Could not find target in the container." << '\n';
	}

	try
	{
		result = easyfind(v1, 42);
		display(result, v1.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << "Could not find target in the container." << '\n';
	}

	try
	{
		result = easyfind(v2, 1);
		display(result, v2.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << "Container is empty." << '\n';
	}
}
