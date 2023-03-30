#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	setName(name);
	pike = &weapon;
}

HumanA::~HumanA(void)
{
	std::cout << "rip :(((" << std::endl;
}

void	HumanA::setName(std::string newname)
{
	name = newname;
}

std::string	HumanA::getName(void)
{
	return (name);
}

void	HumanA::attack(void)
{
	std::cout << getName() << " attacks with their " << pike->getType() << std::endl;
}