#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

std::string	Weapon::getType(void)
{
	return(type);
}

void	Weapon::setType(std::string newtype)
{
	type = newtype;
}

Weapon::Weapon(std::string input)
{
	setType(input);
}

Weapon::~Weapon(void)
{
}