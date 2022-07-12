#include "whatever.hpp"

int		main()
{
	std::string	a = "auuugh", b = "zzzzz";
	float		c = 21.21f, d = 42.42f;
	int			e = 21, f = 42;

	std::cout << "a: " << a << ", b: " << b << std::endl;
	std::cout << "c: " << c << ", d: " << d << std::endl;
	std::cout << "e: " << e << ", f: " << f << std::endl;
	::swap(a, b);
	::swap(c, d);
	::swap(e, f);
	std::cout << "a: " << a << ", b: " << b << std::endl;
	std::cout << "c: " << c << ", d: " << d << std::endl;
	std::cout << "e: " << e << ", f: " << f << std::endl;
	std::cout << "min(a, b) :" << ::min(a, b) << std::endl;
	std::cout << "max(a, b) :" << ::max(a, b) << std::endl;
	std::cout << "min(c, d) :" << ::min(c, d) << std::endl;
	std::cout << "max(c, d) :" << ::max(c, d) << std::endl;
	std::cout << "min(e, f) :" << ::min(e, f) << std::endl;
	std::cout << "max(e, f) :" << ::max(e, f) << std::endl;
	return (0);
}
