#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <list>

class	IOperation;

int	main()
{
	std::list<int>						lst1;
	std::map<std::string, IOperation*>	map1; //map de Ioperation indexée sur des strings
	std::vector<int>					v1;
	std::vector<int>					v2(42, 100);

	lst1.push_back(1);
	lst1.push_back(17);
	lst1.push_back(42);

	map1["opA"] = new OperationA;
	map1["opB"] = new OperationB;

	std::list<int>::const_iterator	it = lst1.begin();
	std::list<int>::const_iterator	ite = lst1.end();

	for (it; it != ite; ++it)
		std::cout << *it << std::endl;
		// will print 1, 17, 42
	return(0);
}


//////////////////////////////////////////////////////////////////////////////////////////

void	display(int i)
{
	std::cout << i << std::endl;
}

int	main()
{
	std::list<int>	lst;

	lst.push_back(10);
	lst.push_back(2);
	lst.push_back(23);
	lst.push_back(18);

	for_each(lst.begin(), lst.end(), display);
	return(0);
}
