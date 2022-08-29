#include "Span.hpp"

int	randSpan()
{
	srand(static_cast<unsigned int>(clock()));
	return (rand() % ((10000) + 1));
}

int	main()
{
	{
		Span sp = Span(5);

		sp.addNumber(0);
		sp.addNumber(10);
		sp.addNumber(26);
		sp.addNumber(39);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		//return 0;
	}
	{
		Span	sp2 = Span(50);
		std::vector<int> randNumbers(42, 0);
		std::generate(randNumbers.begin(), randNumbers.end(), randSpan);
		sp2.addByItRange(randNumbers.begin(), randNumbers.end());
		try
		{
			std::cout << sp2 << std::endl;
			sp2.addNumber(1);
			sp2.addNumber(4);
			std::cout << sp2 << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		Span	sp3 = Span(10000);
		std::vector<int> randNumbers(10000, 0);
		std::generate(randNumbers.begin(), randNumbers.end(), randSpan);
		sp3.addByItRange(randNumbers.begin(), randNumbers.end());
		try
		{
			std::cout << sp3 << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		Span	sp4 = Span(2);
		try
		{
			std::cout << sp4 << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		Span	sp5 = Span(42);
		std::vector<int> randNumbers(42, 0);
		std::generate(randNumbers.begin(), randNumbers.end(), randSpan);
		sp5.addByItRange(randNumbers.begin(), randNumbers.end());
		try
		{
			sp5.addNumber(5);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return 0;
}
