#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iterator>
#include <iostream>

template<typename T>
class MutantStack: public std::stack<T>
{
public:
	MutantStack<T>() {return;}
	MutantStack<T>(const MutantStack<T> &src) : std::stack<T>(src) {}
	~MutantStack<T>() {return;}

	MutantStack<T>	&operator=(const MutantStack<T> &obj)
	{
		if (this != obj)
			this->c = obj.c;
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator	begin() {return this->c.begin();}
	iterator	end() {return this->c.end();}

private:
};

#endif
