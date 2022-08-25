#include "MutantStack.hpp"
#include <list>
#include <vector>

int	main()
{

	{
		std::cout << "**********MUTANT STACK TESTS**********" << std::endl;

		MutantStack<int> staquent;

		staquent.push(10);
		staquent.push(19);
		std::cout << "Top of the stack is " << staquent.top() << std::endl;
		staquent.pop();
		std::cout << "Stack size is " << staquent.size() << std::endl;
		staquent.push(21);
		staquent.push(42);
		staquent.push(0);
		staquent.push(3932);
		MutantStack<int>::iterator it = staquent.begin();
		MutantStack<int>::iterator ite = staquent.end();
		++it;
		--it;
		std::cout << "Mutant stack values stored " << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(staquent);
	}

	{
		std::cout << "**********LIST TESTS**********" << std::endl;

		std::list<int> list;

		list.push_back(10);
		list.push_back(19);
		std::cout << "Top of the list is " << list.back() << std::endl;
		list.pop_back();
		std::cout << "List size is " << list.size() << std::endl;
		list.push_back(21);
		list.push_back(42);
		list.push_back(0);
		list.push_back(3932);
		std::list<int>::iterator it = list.begin();
		std::list<int>::iterator ite = list.end();
		++it;
		--it;
		std::cout << "List values stored " << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(list);
	}

	{
		std::cout << "**********VECTOR TESTS**********" << std::endl;

		std::vector<int> vector;

		vector.push_back(10);
		vector.push_back(19);
		std::cout << "Top of the vector is " << vector.back() << std::endl;
		vector.pop_back();
		std::cout << "Vector size is " << vector.size() << std::endl;
		vector.push_back(21);
		vector.push_back(42);
		vector.push_back(0);
		vector.push_back(3932);
		std::vector<int>::iterator it = vector.begin();
		std::vector<int>::iterator ite = vector.end();
		++it;
		--it;
		std::cout << "Vector values stored " << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::vector<int> s(vector);
	}
	return (0);
}
