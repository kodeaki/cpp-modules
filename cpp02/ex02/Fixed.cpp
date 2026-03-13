
#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	// std::cout << "Int constructor called" << std::endl;
	_fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
	// std::cout << "Float constructor called" << std::endl;
	_fixedPointValue = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed&	Fixed::operator=(const Fixed &other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_fixedPointValue = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

int		Fixed::toInt()const
{
	return (_fixedPointValue >> _fractionalBits);
}

float	Fixed::toFloat()const
{
	return ((float)_fixedPointValue / (float)(1 << _fractionalBits));
}

int		Fixed::getRawBits()const
{
	return (_fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	_fixedPointValue = raw;
}

// Comparison operators
bool	Fixed::operator>(const Fixed &other)const
{
	return (_fixedPointValue > other._fixedPointValue);
}

bool	Fixed::operator<(const Fixed &other)const
{
	return (_fixedPointValue < other._fixedPointValue);
}

bool	Fixed::operator>=(const Fixed &other)const
{
	return (_fixedPointValue >= other._fixedPointValue);
}

bool	Fixed::operator<=(const Fixed &other)const
{
	return (_fixedPointValue <= other._fixedPointValue);
}

bool	Fixed::operator==(const Fixed &other)const
{
	return (_fixedPointValue == other._fixedPointValue);
}

bool	Fixed::operator!=(const Fixed &other)const
{
	return (_fixedPointValue != other._fixedPointValue);
}

// Arithmetic operators
Fixed	Fixed::operator+(const Fixed &other)const
{
	Fixed	sum;
	sum.setRawBits(_fixedPointValue + other._fixedPointValue);
	return (sum);
}

Fixed	Fixed::operator-(const Fixed &other)const
{
	Fixed	difference;
	difference.setRawBits(_fixedPointValue - other._fixedPointValue);
	return (difference);
}

Fixed	Fixed::operator*(const Fixed &other)const
{
	Fixed		product;
	long long	multiplicand = static_cast<long long>(_fixedPointValue);
	long long	multiplier = static_cast<long long>(other._fixedPointValue);

	product.setRawBits(static_cast<int>((multiplicand * multiplier) >> _fractionalBits));
	return (product);
}

Fixed	Fixed::operator/(const Fixed &other)const
{
	Fixed		quotient;
	long long	dividend = static_cast<long long>(_fixedPointValue);
	long long	divisor = static_cast<long long>(other._fixedPointValue);

	quotient.setRawBits(static_cast<int>((dividend << _fractionalBits) / divisor));
	return (quotient);
}

// Increment operators

// Pre increment
Fixed&	Fixed::operator++()
{
	_fixedPointValue++;
	return (*this);
}

// Post increment
Fixed	Fixed::operator++(int)
{
	Fixed	beforeIncrementValue = *this;
	_fixedPointValue++;
	return (beforeIncrementValue);
}

// Pre decrement
Fixed&	Fixed::operator--()
{
	_fixedPointValue--;
	return (*this);
}

// Post decrement
Fixed	Fixed::operator--(int)
{
	Fixed	beforeDecrementValue = *this;
	_fixedPointValue--;
	return (beforeDecrementValue);
}

// Mins and maxes
Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a._fixedPointValue < b._fixedPointValue)
		return (a);
	else
		return (b);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a._fixedPointValue < b._fixedPointValue)
		return (a);
	else
		return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a._fixedPointValue > b._fixedPointValue)
		return (a);
	else
		return (b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a._fixedPointValue > b._fixedPointValue)
		return (a);
	else
		return (b);
}

std::ostream&	operator<<(std::ostream& outstream, const Fixed& fixed)
{
    outstream << fixed.toFloat();
    return (outstream);
}
