#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	setType("Dog");
}

Dog::Dog(const Dog &d)
{
	std::cout << "Dog copy constructor called" << std::endl;
	setType(d.getType());
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &d)
{
	setType(d.getType());
	return (*this);
}