#include "Fixed.hpp"

Fixed::Fixed()
{
    rawbits = 0;
}

// copy constructor
// initialises variables of the class using an
// previously initialised object
Fixed::Fixed(const Fixed &copy)
{
    setRawBits(copy.getRawBits());
}

Fixed::~Fixed()
{
    return ;
}

int Fixed::getRawBits(void) const
{
    return (rawbits);
}

void    Fixed::setRawBits(int const raw)
{
    rawbits = raw;
}

// Copy assignment operator overload
// Makes it so user defined data types (class and objects)
// is able to use the = operator, data on the right side
// is copied to the left side.
Fixed	&Fixed::operator=(const Fixed &f)
{
	setRawBits(f.getRawBits());
    // returns refrence to the object
	return (*this);
}

Fixed::Fixed(int const n)
{
	rawbits = n << bits;
}

Fixed::Fixed(float const f)
{
	rawbits = roundf(f * (1 << bits));
}

float   Fixed::toFloat(void) const
{
	return ((float)rawbits / (float)(1 << bits));
}

int Fixed::toInt(void) const
{
	return (rawbits >> bits);
}

// overloads the << operator - the stream insertion operator
// not the left bit shift operation lol
std::ostream	&operator<<(std::ostream &stream, const Fixed &f)
{
	stream << f.toFloat();
	return (stream);
}

float	Fixed::operator+(const Fixed &f)
{
	return (this->toFloat() + f.toFloat());
}

float	Fixed::operator-(const Fixed &f)
{
	return (this->toFloat() - f.toFloat());
}

float	Fixed::operator*(const Fixed &f)
{
	return (this->toFloat() * f.toFloat());
}

float	Fixed::operator/(const Fixed &f)
{
	return (this->toFloat() / f.toFloat());
}

bool	Fixed::operator>(const Fixed &f)
{
	return (this->getRawBits() > f.getRawBits());
}

bool	Fixed::operator<(const Fixed &f)
{
	return (this->getRawBits() < f.getRawBits());
}

bool	Fixed::operator>=(const Fixed &f)
{
	return (this->getRawBits() >= f.getRawBits());
}

bool	Fixed::operator<=(const Fixed &f)
{
	return (this->getRawBits() <= f.getRawBits());
}

bool	Fixed::operator==(const Fixed &f)
{
	return (this->getRawBits() == f.getRawBits());
}

bool	Fixed::operator!=(const Fixed &f)
{
	return (this->getRawBits() != f.getRawBits());
}

float	Fixed::operator++(void)
{
	this->rawbits++;
	return (this->toFloat());
}

float	Fixed::operator--(void)
{
	this->rawbits--;
	return (this->toFloat());
}

// The function takes an integer parameter, which is ignored 
// in this case because the parameter is only used to differentiate 
// between prefix and postfix increment operators (the prefix version 
// would have the parameter type void instead of int).
Fixed	Fixed::operator++(int)
{
	Fixed prefix(*this);
	++(*this);
	return (prefix);
}

Fixed	Fixed::operator--(int)
{
	Fixed prefix(*this);
	--(*this);
	return (prefix);
}

// ternary operator ? evaluates the comparison on the left
// : decides which number to return
// if the answer is true (a is less than b) it will return
// a, if it is false (a is greater than b) it will return
// b.
Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return ((a.rawbits < b.rawbits) ? a : b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return ((a.rawbits > b.rawbits) ? a : b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	return ((a.rawbits < b.rawbits) ? a : b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	return ((a.rawbits > b.rawbits) ? a : b);
}