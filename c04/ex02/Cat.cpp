#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor meow" << std::endl;
	setType("Cat");
	this->brain = new Brain();
}

Cat::Cat(const Cat &c): brain(new Brain())
{
	std::cout << "Cat copy constructor called" << std::endl;
	setType(c.getType());
	*(this->brain) = *(c.brain);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

Cat	&Cat::operator=(const Cat &c)
{
	setType(c.getType());
	return (*this);
}

Brain	*Cat::getBrain()
{
	return (this->brain);
}