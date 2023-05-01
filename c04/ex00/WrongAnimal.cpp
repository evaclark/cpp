#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wa)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	setType(wa.getType());
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &wa)
{
	setType(wa.getType());
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return(this->type);
}

void	WrongAnimal::setType(std::string t)
{
	this->type = t;
}

void	WrongAnimal::makeSound() const
{
	if (this->type == "Cat")
		std::cout << "woof??" << std::endl;
	if (this->type == "Dog")
		std::cout << "meow..." << std::endl;
	return ;
}