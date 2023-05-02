#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called" << std::endl;
	setType("Cat");
}

WrongCat::WrongCat(const WrongCat &wc)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	setType(wc.getType());
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &wc)
{
	setType(wc.getType());
	return (*this);
}