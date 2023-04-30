#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Useful ScavTrap constructor called" << std::endl;
	this->name = name;
	this->att = 20;
	this->hit = 100;
	this->energy = 50;
}

ScavTrap::ScavTrap(const ScavTrap &s)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	setName(s.getName());
	setHit(s.getHit());
	setAttack(s.getAttack());
	setEnergy(s.getEnergy());
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap is no more (destructed)" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (hitCheck(this->hit) || energyCheck(this->energy))
        return ;
	std::cout << this->name << " has " << this->energy << " energy left." << std::endl;
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->att << " points of damage!" << std::endl;
	setEnergy(this->energy - 1);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is gatekeeping now >:(" << std::endl;
}

ScavTrap    &ScavTrap::operator=(const ScavTrap &s)
{
	setName(s.getName());
    setAttack(s.getAttack());
    setHit(s.getHit());
    setEnergy(s.getEnergy());

    return (*this);
}