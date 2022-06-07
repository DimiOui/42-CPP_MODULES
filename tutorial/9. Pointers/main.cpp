#include <iostream>
#include "Sample.hpp"

int	main()
{
	Sample	instance;
	Sample	*instancep = &instance;

	int		Sample::*p = NULL;
	//on créé un pointeur nul qui va pointer sur un entier dans sample
	void	(Sample::*f)() const;
	//

	p = &Sample::foo; //on assigne l'adresse de foo a notre pointeur

	std::cout << "Value of foo: " << instance.foo << std::endl;
	instance.*p = 21;
	std::cout << "Value of foo: " << instance.foo << std::endl;
	instancep->*p = 32; //notice the difference
	std::cout << "Value of foo: " << instance.foo << std::endl;

	f = &Sample::bar;
	(instance.*f)();
	(instancep->*f)();

	return (0);
}
