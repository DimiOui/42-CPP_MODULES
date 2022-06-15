#include "Fixed.hpp"

Fixed::Fixed() : _fixedValue(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(int const iVal)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedValue = (iVal << Fixed::_bitsFract);
	return;
}

Fixed::Fixed(float const fVal)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedValue = roundf(fVal * (1 << Fixed::_bitsFract));
	return;
}

Fixed::Fixed(Fixed const &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixedValue = obj.getRawBits();
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed	&Fixed::operator=(Fixed const &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedValue = obj.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedValue);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called (but not useful here lol)" << std::endl;
	this->_fixedValue = raw;
}

float	Fixed::toFloat() const
{
	return ((float)this->_fixedValue / (float)(1 << Fixed::_bitsFract));
}

int		Fixed::toInt() const
{
	return (this->_fixedValue >> Fixed::_bitsFract);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}
