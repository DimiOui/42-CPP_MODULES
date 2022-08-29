//#include "Span.hpp"

//int	randSpan()
//{
//	srand(static_cast<unsigned int>(clock()));
//	return (rand() % ((10000) + 1));
//}

//int	main()
//{
//	{
//		Span sp = Span(5);

//		sp.addNumber(6);
//		sp.addNumber(3);
//		sp.addNumber(17);
//		sp.addNumber(9);
//		sp.addNumber(11);

//		std::cout << sp.shortestSpan() << std::endl;
//		std::cout << sp.longestSpan() << std::endl;

//		return 0;
//	}
//	{
//		Span	sp2 = Span(50);
//		std::vector<int> randNumbers(42, 0);
//		std::generate(randNumbers.begin(), randNumbers.end(), randSpan);
//		sp2.addByItRange(randNumbers.begin(), randNumbers.end());
//		try
//		{
//			std::cout << sp2 << std::endl;
//			sp2.addNumber(1);
//			sp2.addNumber(4);
//			std::cout << sp2 << std::endl;
//		}
//		catch(const std::exception& e)
//		{
//			std::cerr << e.what() << '\n';
//		}
//	}
//	{
//		Span	sp3 = Span(10000);
//		std::vector<int> randNumbers(10000, 0);
//		std::generate(randNumbers.begin(), randNumbers.end(), randSpan);
//		sp3.addByItRange(randNumbers.begin(), randNumbers.end());
//		try
//		{
//			std::cout << sp3 << std::endl;
//		}
//		catch(const std::exception& e)
//		{
//			std::cerr << e.what() << '\n';
//		}
//	}
//	{
//		Span	sp4 = Span(2);
//		try
//		{
//			std::cout << sp4 << std::endl;
//		}
//		catch(const std::exception& e)
//		{
//			std::cerr << e.what() << '\n';
//		}
//	}
//	{
//		Span	sp5 = Span(42);
//		std::vector<int> randNumbers(42, 0);
//		std::generate(randNumbers.begin(), randNumbers.end(), randSpan);
//		sp5.addByItRange(randNumbers.begin(), randNumbers.end());
//		try
//		{
//			sp5.addNumber(5);
//		}
//		catch(const std::exception& e)
//		{
//			std::cerr << e.what() << '\n';
//		}
//	}
//	return 0;
//}

#include "Span.hpp"

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iterator>
#include <unistd.h>
#include <vector>

static unsigned long mix(unsigned long a, unsigned long b, unsigned long c) {
    a = a - b;
    a = a - c;
    a = a ^ (c >> 13);
    b = b - c;
    b = b - a;
    b = b ^ (a << 8);
    c = c - a;
    c = c - b;
    c = c ^ (b >> 13);
    a = a - b;
    a = a - c;
    a = a ^ (c >> 12);
    b = b - c;
    b = b - a;
    b = b ^ (a << 16);
    c = c - a;
    c = c - b;
    c = c ^ (b >> 5);
    a = a - b;
    a = a - c;
    a = a ^ (c >> 3);
    b = b - c;
    b = b - a;
    b = b ^ (a << 10);
    c = c - a;
    c = c - b;
    c = c ^ (b >> 15);
    return c;
}

static int random_number() {
    srand(mix(clock(), time(NULL), getpid()));
    return rand();
}

int main(int ac, char** av) {

    std::cout << KMAG;

    std::cout << KMAG "====================== [ TEST ] Iterators ====================" << std::endl
              << std::endl;

    bool verbose = false;
    if (ac > 1 and not(std::string(av[1]).compare("-v"))) {
        verbose = true;
        std::cout << "Verbose mode: [ON]" << std::endl;
    } else
        std::cout << "Verbose mode: [OFF]" << std::endl;
    std::cout << std::endl;

    std::cout << KMAG "========== Trying longestSpan() on an empty vector: ==========" << std::endl
              << std::endl;

    Span span = Span(5);
    try {
        std::cout << " longestSpan(): " << span.longestSpan() << std::endl;
    } catch (std::exception& e) {
        std::cerr << KRED << e.what() << KNRM << std::endl;
    }
    std::cout << std::endl
              << std::endl;
    ;

    std::cout << KMAG "========== Try to add too many values to a vector: ===========" << std::endl
              << std::endl;
    try {
        span.addNumber(random_number());
        span.addNumber(random_number());
        span.addNumber(random_number());
        span.addNumber(random_number());
        span.addNumber(random_number());
        span.addNumber(random_number());
    } catch (std::exception& e) {
        std::cerr << KRED << e.what() << KNRM << std::endl;
    }
    std::cout << std::endl
              << std::endl;
    ;

    std::cout << KMAG "==================== Call longestSpan() ======================" << std::endl
              << std::endl;

    if (verbose)
        span.printVect();

    std::cout << std::endl;

    try {
        std::cout << " longestSpan(): " << span.longestSpan() << std::endl;
    } catch (std::exception& e) {
        std::cerr << KRED << e.what() << KNRM << std::endl;
    }
    std::cout << std::endl
              << std::endl;

    std::cout << KMAG "==================== Call shortestSpan() =====================" << std::endl
              << std::endl;

    if (verbose)
        span.printVect();

    std::cout << std::endl;

    try {
        std::cout << " shortestSpan(): " << span.shortestSpan() << std::endl;
    } catch (std::exception& e) {
        std::cerr << KRED << e.what() << KNRM << std::endl;
    }
    std::cout << std::endl
              << std::endl;

    std::cout << KMAG "=============== Call to overloaded addNumber() ===============" << std::endl
              << std::endl;

    Span fat_span = Span(15000);
    std::vector<int> init_vec(15000);
    std::generate(init_vec.begin(), init_vec.end(), random_number);
    try {
        fat_span.addNumber(init_vec.begin(), init_vec.end());
    } catch (std::exception& e) {
        std::cerr << KRED << e.what() << KNRM << std::endl;
    }
    std::cout << std::endl;

    try {
        std::cout << KMAG " shortestSpan(): " << fat_span.shortestSpan() << std::endl;
    } catch (std::exception& e) {
        std::cerr << KRED << e.what() << KNRM << std::endl;
    }

    std::cout << std::endl;

    try {
        std::cout << KMAG " longestSpan(): " << fat_span.longestSpan() << std::endl;
    } catch (std::exception& e) {
        std::cerr << KRED << e.what() << KNRM << std::endl;
    }
    std::cout << std::endl
              << std::endl;

    std::cout << KMAG "== Try to add too many values to a vector with addNumber(): ==" << std::endl
              << std::endl;

    try {
        fat_span.addNumber(init_vec.begin(), init_vec.end());
    } catch (std::exception& e) {
        std::cerr << KRED << e.what() << KNRM << std::endl;
    }
    std::cout << std::endl;

    std::cout << KNRM;

    return EXIT_SUCCESS;
}
