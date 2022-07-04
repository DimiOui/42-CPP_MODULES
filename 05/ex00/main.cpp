#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat	Dave = Bureaucrat("Dave", 1);
		std::cout << Dave << std::endl;
		Dave.downgrade();
		Dave.downgrade();
		std::cout << Dave << std::endl;
		Dave.upgrade();
		std::cout << Dave << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat	Kevin;
		Bureaucrat	Jeff;
		Bureaucrat	Marc;
		std::cout << Kevin << std::endl;
		std::cout << Jeff << std::endl;
		std::cout << Marc << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat	Jose("Jose");
		std::cout << Jose << std::endl;
		Bureaucrat	*Thomas = new Bureaucrat;
		std::cout << *Thomas << std::endl;
		Thomas->upgrade();
		std::cout << *Thomas << std::endl;
		delete Thomas;
		Jose.downgrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat	Jake(85);
		std::cout << Jake << std::endl;
		Jake.upgrade();
		std::cout << Jake << std::endl;
		Bureaucrat	Twin = Jake;
		std::cout << Twin << std::endl;
		Twin.downgrade();
		std::cout << Twin << std::endl;
		Bureaucrat	Dave("Dave");
		std::cout << Dave << std::endl;
		Dave.upgrade();
		std::cout << Dave << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat Dave("Dave", 1);
		std::cout << Dave << std::endl;
		Dave.upgrade();
		std::cout << Dave << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
