#ifndef	EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

#pragma once

template <typename T>
typename T::iterator	easyfind(T &container, int target)
{
	typename T::iterator	res = find(container.begin(), container.end(), target);

	if (container.empty() || res == container.end() && *container.end() != target)
		throw std::exception();
	return (res);
}

template <typename T>
void	display(T res, T ite)
{
	if (res != ite)
		std::cout << "Iterator found is " << *res << std::endl;
}

#endif
