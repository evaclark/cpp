#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	setType("Dog");
	this->brain = new Brain();
}

Dog::Dog(const Dog &d): brain(nullptr)
{
	std::cout << "Dog copy constructor called" << std::endl;
	setType(d.getType());
	if (d.brain)
		this->brain = new Brain(*d.brain);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

Dog	&Dog::operator=(const Dog &d)
{
	setType(d.getType());
	return (*this);
}

Brain	*Dog::getBrain()
{
	return (this->brain);
}