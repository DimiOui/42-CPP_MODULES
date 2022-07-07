#include "Converter.hpp"

Converter::Converter()
{
	std::cout << KYEL "Converter class constructor called." << std::endl;
	return;
}

Converter::Converter(Converter const &obj)
{
	std::cout << KYEL "Converter class copy constructor called." << std::endl;
	*this = obj;
	return;
}

Converter::~Converter()
{
	std::cout << KYEL "Converter class destructor called." << std::endl;
	return;
}

Converter	&Converter::operator=(Converter const &obj)
{
	std::cout << KYEL "Assignement operator overload for Converter called." << std::endl;
	this->_input = obj._input;
	return (*this);
}

void	Converter::convert(char *input)
{
	this->_input = input;

	switch(getType(input))
	{
		case(toChar):
			convToChar();
			break;
		case(toInt):
			convToInt();
			break;
		case(toFloat):
			convToFloat();
			break;
		case(toDouble):
			convToFloat();
			break;
		case(toOther):
			convToOther();
			break;
	}
}

int	Converter::getType(const char *toConvert)
{
	char	*ptr;
	double	ret;

	ret = strtod(toConvert, &ptr);
	if (strlen(toConvert) == 1 && !isdigit(*toConvert))
		return (toChar);
	else if (!*ptr && !(static_cast<int>(ret) - ret)
			&& static_cast<int>(ret) >= std::numeric_limits<int>::min()
			&& static_cast<int>(ret) <= std::numeric_limits<int>::max())
		return (toInt);
	else if (strlen(ptr) == 1 && *ptr == 'f'
			&& static_cast<float>(ret) >= -std::numeric_limits<float>::max()
			&& static_cast<float>(ret) <= std::numeric_limits<float>::max())
		return (toFloat);
	else if (!*ptr && ret == atof(toConvert))
		return (toFloat);
	else
		return (toOther);
}

void	Converter::convToChar()
{
	std::cout << KBLU "char: " << KWHT << _input << std::endl;
	std::cout << KBLU "int: " << KWHT << static_cast<int>(_input[0]) << std::endl;
	std::cout << KBLU "float: " << KWHT << static_cast<float>(_input[0]) << 'f' << std::endl;
	std::cout << KBLU "double: " << KWHT << static_cast<double>(_input[0]) << std::endl;
}

void	Converter::convToInt()
{
	double	ret = strtod(_input.c_str(), NULL);
	if (static_cast<char>(ret) >= ' ' && static_cast<char>(ret) <= '~')
		std::cout << KBLU "char: " << KWHT << static_cast<char>(ret) << std::endl;
	else
		std::cout << KBLU "char:" << KWHT " Non displayable" << std::endl;
	std::cout << KBLU "int: " << KWHT << static_cast<int>(ret) << std::endl;
	std::cout << KBLU "float: " << KWHT << static_cast<float>(ret) << ".0f" << std::endl;
	std::cout << KBLU "double: " << KWHT << static_cast<double>(ret) << ".0" << std::endl;
}

void	Converter::convToFloat()
{
	double	ret = strtod(_input.c_str(), NULL);
	if (static_cast<char>(ret) >= ' ' && static_cast<char>(ret) <= '~')
		std::cout << KBLU "char: " << KWHT << static_cast<char>(ret) << std::endl;
	else
		std::cout << KBLU "char:" << KWHT " Non displayable" << std::endl;
	if (ret > std::numeric_limits<int>::max()
		|| ret < std::numeric_limits<int>::min())
		std::cout << KBLU "int: " << KWHT "impossible" << std::endl;
	else
		std::cout << KBLU "int: " << KWHT << static_cast<int>(ret) << std::endl;
	std::cout << KBLU "float: " << KWHT << static_cast<float>(ret) << 'f' << std::endl;
	std::cout << KBLU "double: " << KWHT << ret << std::endl;
}

void	Converter::convToOther()
{
	double	ret = strtod(_input.c_str(), NULL);
	if (!_input.compare("+inff") || !_input.compare("+inf") ||
			ret == HUGE_VAL)
	{
		std::cout << KBLU "char: " << KWHT "impossible" << std::endl;
		std::cout << KBLU "int: " << KWHT "impossible" << std::endl;
		std::cout << KBLU "float: " << KWHT "inff" << std::endl;
		std::cout << KBLU "double: " << KWHT "inf" << std::endl;
	}
	else if (!_input.compare("-inff") || !_input.compare("-inf")
			|| ret == -HUGE_VAL)
	{
		std::cout << KBLU "char: " << KWHT "impossible" << std::endl;
		std::cout << KBLU "int: " << KWHT "impossible" << std::endl;
		std::cout << KBLU "float: " << KWHT "-inff" << std::endl;
		std::cout << KBLU "double: " << KWHT "-inf" << std::endl;
	}
	else
	{
		std::cout << KBLU "char: " << KWHT "impossible" << std::endl;
		std::cout << KBLU "int: " << KWHT "impossible" << std::endl;
		std::cout << KBLU "float: " << KWHT "nanf" << std::endl;
		std::cout << KBLU "double: " << KWHT "nan" << std::endl;
	}
}

const char* Converter::NoInput::what() const throw()
{
            return (KRED "Input is empty.");
}
