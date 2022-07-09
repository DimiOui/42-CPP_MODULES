#include <iostream>

class Parent				{};
class Child1: public Parent	{};
class Child2: public Parent	{};

class Unrelated				{};

int	main()
{
	{
		int		a = 42;

		double	b = a;						// Implicit promotion, C syntax
		int		d = static_cast<int>(b);	// Explicit demotion C++ syntax
	}
	
	{
		Child1		a;

		Parent		*b = &a;							// Implicit upcast
		Child1		*c = b;								// Implicit downcast (*WRONG*)
		Child2		*d = static_cast<Child2 *>(b);		// Explicit downcast (can be a problem);
		Unrelated	*e = static_cast<Unrelated *>(&a);	// Explicit conversion (*WRONG*)
	}
}
