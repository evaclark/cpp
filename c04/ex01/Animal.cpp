#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &a)
{
	std::cout << "Animal copy constructor called" << std::endl;
	setType(a.getType());
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &a)
{
	setType(a.getType());
	return (*this);
}

std::string	Animal::getType() const
{
	return (this->type);
}

void	Animal::setType(std::string t)
{
	this->type = t;
}

void	Animal::makeSound() const
{
	if (this->type == "Cat")
		std::cout << "meow" << std::endl;
	if (this->type == "Dog")
		std::cout << "woof" << std::endl;
	return ;
}