#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" <<std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (rawbits);
}

void    Fixed::setRawBits(int const raw)
{
    rawbits = raw;
}