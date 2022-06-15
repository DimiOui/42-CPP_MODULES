#include "Fixed.hpp"

int	main()
{
	Fixed	a;
	Fixed	const b(10);
	Fixed	const c(42.42f);
	Fixed	const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return (0);
}

//	eg with 42.42
//	101010.01101011 is the approximative floating binary value of 42.42
//	where 101010 is 42, and .01101011 is .42 with a precision of 8 bits.
//	basically if we shift everything to the rightmost bit we get 10101001101011
//	10101001101011 in decimal is 10859
//	if we round it back to normal we get 42.4179. Not that precise ...

//	Remember that because we're working with a specific precision,
//	our floating point value will always be approximative. (8 bits precision)

//	So, taking our 42.42 * (1 << 8) and rounding it we'll get 10101001101100
//	10101001101100 in decimal is 10860
//	Putting back our floating point in place we get 101010.01101100
//	which get us : 42.4219 where 101010 is 42 and 01101100 is .4219.
//	our floating point number with a precision of 8 bits is then 42.4219
//	A bit more precise ain't it?

//	https://ryanstutorials.net/binary-tutorial/binary-floating-point.php
