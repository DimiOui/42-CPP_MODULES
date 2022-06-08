#include <iostream>
#include <string>

int	main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "string address: " << &string << std::endl;
	std::cout << "stringPTR address: " << &(*stringPTR) << std::endl;
	std::cout << "stringREF address: " << &stringREF << std::endl;

	std::cout << "----------------------------------" << std::endl;

	std::cout << "string: " << string << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
}
