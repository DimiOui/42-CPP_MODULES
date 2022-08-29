#include "Span.hpp"

Span::Span(unsigned int const &size) : _size(size)
{
	std::cout << KYEL "Sized Span class constructor called." << std::endl;
	return;
}

Span::Span(Span const &obj) : _numbersVect(obj._numbersVect), _size(obj._size)
{
	std::cout << KYEL "Span class copy constructor called." << std::endl;
	return;
}

Span::~Span()
{
	std::cout << KYEL "Span class destructor called." << std::endl;
	return;
}

Span &Span::operator=(Span const &obj)
{
	std::cout << KYEL "Assignement operator overload for Span class called." << std::endl;
	if (this != &obj)
	{
		//this->_size = obj.getSize();
		//this->_numbersVect = obj.getNumbers();
		this->_size = obj._size;
		this->_numbersVect = obj._numbersVect;
	}
	return (*this);
}

void	Span::addNumber(unsigned int &n)
{
	if (this->_size == _numbersVect.size())
		throw std::out_of_range(KRED "Vector is full, can't add more numbers.");
	_numbersVect.push_back(n);
	std::cout << KWHT "Number " << n << " added to vector." << std::endl;
}

void	Span::addByItRange(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end)
{
	std::vector<int> tmp = std::vector<int>(begin, end);
	//std::vector<int>	tmp(begin, end);
	if (tmp.size() + _numbersVect.size() > _size)
		throw std::length_error(KRED "Vector is full, can't add more numbers.");
	_numbersVect.insert(_numbersVect.end(), begin, end);
}

void	Span::printVect() const
{
	std::cout << " pr" << std::endl;
	for (std::vector<int>::const_iterator i(_numbersVect.begin()); i != _numbersVect.end(); ++i)
		std::cout << " " << *i << std::endl;
}

unsigned int	Span::shortestSpan() const
{
	if (_numbersVect.size() < 2)
		throw std::logic_error(KRED "Not enough numbers, shortest distance not calculated.");

	std::sort(_numbersVect.begin(), _numbersVect.end());
	unsigned int	short_span = std::abs(_numbersVect[0] - _numbersVect[1]);
	for (unsigned int i = 0; i != _numbersVect.size() - 1; ++i)
	{
		if (_numbersVect[i + 1] - _numbersVect[i] < static_cast<int>(short_span))
			short_span = _numbersVect[i + 1] - _numbersVect[i];
	}
	return (short_span);
}

unsigned int	Span::longestSpan() const
{
	if (_numbersVect.size() < 2)
		throw std::logic_error(KRED "Not enough numbers, longest distance not calculated.");
	unsigned int max = *max_element(_numbersVect.begin(), _numbersVect.end());
	unsigned int min = *min_element(_numbersVect.begin(), _numbersVect.end());
	return (max - min);
}

unsigned int	Span::getMaxSize() const
{
	return (this->_size);
}

unsigned int	Span::getSize() const
{
	return (_numbersVect.size());
}

std::vector<int>	Span::getNumbers() const
{
	return (this->_numbersVect);
}

std::ostream	&operator<<(std::ostream &o, Span const &i)
{
	unsigned int	short_span = i.shortestSpan();
	unsigned int	long_span = i.longestSpan();

	o << KWHT "Span of size " << i.getMaxSize() << " with " << i.getSize();
	o << " numbers." << std::endl;
	o << KBLU "Longest span : " << long_span << std::endl;
	o << KGRN "Shortest span : " << short_span << std::endl;

	return o;
}
