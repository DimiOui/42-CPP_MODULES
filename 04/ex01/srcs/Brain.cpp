#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created." << std::endl;
	return;
}

Brain::Brain(Brain const &obj)
{
	std::cout << "Brain copy constructor called." << std::endl;
	*this = obj;
	return;
}
Brain::~Brain()
{
	std::cout << "Brain destroyed." << std::endl;
	return;
}

Brain	&Brain::operator=(Brain const &obj)
{
	std::cout << "Assignement operator overload for Brain called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
	return (*this);
}
