#include <iostream>
#include <cstdlib>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate()
{
	int	generateClass = (rand() % 3) + 1;

	if (generateClass == 1)
		return new A();
	else if (generateClass == 2)
		return new B();
	else if (generateClass == 3)
		return new C();
	else
		return (NULL);
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << 'A' << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << 'B' << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << 'C' << std::endl;
	else
		return;
}

void identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << 'A' << std::endl;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}

	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << 'B' << std::endl;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}

	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << 'C' << std::endl;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
}

int	main()
{
	Base	*base = generate();
	std::cout << "identify by pointer: ";
	identify(base);
	std::cout << "identify by reference: ";
	identify(*base);
	std::cout << std::endl;
	delete base;

	base = generate();
	std::cout << "identify by pointer: ";
	identify(base);
	std::cout << "identify by reference: ";
	identify(*base);
	std::cout << std::endl;
	delete base;

	base = generate();
	std::cout << "identify by pointer: ";
	identify(base);
	std::cout << "identify by reference: ";
	identify(*base);
	std::cout << std::endl;
	delete base;

	base = generate();
	std::cout << "identify by pointer: ";
	identify(base);
	std::cout << "identify by reference: ";
	identify(*base);
	std::cout << std::endl;
	delete base;

	base = generate();
	std::cout << "identify by pointer: ";
	identify(base);
	std::cout << "identify by reference: ";
	identify(*base);
	delete base;
}
