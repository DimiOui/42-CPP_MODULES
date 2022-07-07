#include <iostream>
#include <typeinfo>
#include <exception>

class Parent				{public: virtual ~Parent() {}};
class Child1: public Parent {};
class Child2: public Parent {};

int	main()
{
	Child1	a;
	Parent	*b = &a;	// Implicit upcast

	// Explicit downcast (pointer) - OK (Child1 is hidden in Parent b so it works)
	Child1	*c = dynamic_cast<Child1 *>(b);
	if (c == NULL)
		std::cout << "Conversion is NOT ok" << std::endl;
	else
		std::cout << "Conversion is OK" << std::endl;

	// Explicit downcast (reference) - not OK
	// (Child1 is still hidden, type is different from Child2 so it doesn't work)
	try
	{
		Child2	&d = dynamic_cast<Child2 &>(*b);
		std::cout << "Conversion is OK" << std::endl;
	}
	catch (std::bad_cast &bc)
	{
		std::cout << "Conversion is not OK" << std::endl;
		return (0);
	}
}

// DYNAMIC CAST ONLY WORKS IF THERE'S A POLYMORPHIC CLASS
