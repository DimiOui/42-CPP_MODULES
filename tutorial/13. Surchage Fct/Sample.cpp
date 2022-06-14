#include "Sample.hpp"

Sample::Sample()
{
}

Sample::~Sample()
{
}

void	Sample::bar(char const c) const
{
	std::cout << "Char overload : " << c << std::endl;
	return;
}

void	Sample::bar(int const n) const
{
	std::cout << "Int overload : " << n << std::endl;
	return;
}

void	Sample::bar(float const z) const
{
	std::cout << "Float overload : " << z << std::endl;
	return;
}

void	Sample::bar(Sample const &i) const
{
	(void)i;
	std::cout << "Class overload" << std::endl;
	return;
}
