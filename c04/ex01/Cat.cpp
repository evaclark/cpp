#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor meow" << std::endl;
	setType("Cat");
}

Cat::Cat(const Cat &c)
{
	std::cout << "Cat copy constructer called" << std::endl;
	setType(c.getType());
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &c)
{
	setType(c.getType());
	return (*this);
}