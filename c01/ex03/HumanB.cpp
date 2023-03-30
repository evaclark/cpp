#include "HumanB.hpp"

HumanB::HumanB(std::string input)
{
	setName(input);
}

HumanB::~HumanB(void)
{
	std::cout << "i died :((" << std::endl;
}

void	HumanB::setName(std::string newname)
{
	name = newname;
}

std::string	HumanB::getName()
{
	return (name);
}

void	HumanB::setWeapon(Weapon &weapon)
{
	pike = &weapon;
}

void	HumanB::attack()
{
	std::cout << getName() << " attacks with their " << pike->getType() << std::endl;
}