#include "Fixed.hpp"

// CONSTRUCTOR / DESTRUCTOR

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

// ARITHMETIC OPERATORS

Fixed	Fixed::operator+(Fixed const &obj)
{
	Fixed	result;

	result._fixedValue = _fixedValue + obj._fixedValue;
	return (result);
}

Fixed	Fixed::operator-(Fixed const &obj)
{
	Fixed	result;

	result._fixedValue = _fixedValue - obj._fixedValue;
	return (result);
}

Fixed	Fixed::operator/(Fixed const &obj)
{
	Fixed	result;

	result._fixedValue = _fixedValue / obj._fixedValue;
	return (result);
}

Fixed	Fixed::operator*(Fixed const &obj)
{
	Fixed	result;

	result._fixedValue = (toFloat() * obj.toFloat()) * (1 << _bitsFract);
	return (result);
}

// INCREMENT/DECREMENT OPERATORS

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	_fixedValue++;
	return (tmp);
}

Fixed	&Fixed::operator++()
{
	++_fixedValue;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	_fixedValue--;
	return (tmp);
}

Fixed	&Fixed::operator--()
{
	--_fixedValue;
	return (*this);
}

// COMPARISON OPERATORS

bool	Fixed::operator>(Fixed const &obj) const
{
	return (this->getRawBits() > obj.getRawBits());
}

bool	Fixed::operator<(Fixed const &obj) const
{
	return (this->getRawBits() < obj.getRawBits());
}

bool	Fixed::operator>=(Fixed const &obj) const
{
	return (this->getRawBits() >= obj.getRawBits());
}

bool	Fixed::operator<=(Fixed const &obj) const
{
	return (this->getRawBits() <= obj.getRawBits());
}

bool	Fixed::operator==(Fixed const &obj) const
{
	return (this->getRawBits() == obj.getRawBits());
}

bool	Fixed::operator!=(Fixed const &obj) const
{
	return (this->getRawBits() != obj.getRawBits());
}

//	ACCESSORS

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
// PUBLIC OVERLOAD MEMBERS MIN/MAX

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a < b)
		return (b);
	return (a);
}

Fixed const	Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed const	Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (b);
	return (a);
}

// OSTREAM OVERLOAD

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}
