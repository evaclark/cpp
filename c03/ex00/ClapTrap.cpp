#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor called" << std::endl;
	setName(name);
    setHit(10);
	setAttack(2);
	setEnergy(10);
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
	std::cout << "Copy constructor called" << std::endl;
	setName(c.getName());
	setHit(c.getHit());
	setAttack(c.getAttack());
	setEnergy(c.getEnergy());
}

ClapTrap::~ClapTrap()
{	
	std::cout << "Destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &c)
{
    setName(c.getName());
    setAttack(c.getAttack());
    setHit(c.getHit());
    setEnergy(c.getEnergy());

    return (*this);
}

void ClapTrap::attack(const std::string &target)
{
    if (hitCheck(this->hit) || energyCheck(this->energy))
        return ;
	std::cout << this->name << " attacks " << target << ", causing " << this->att << " points of damage!" << std::endl;
	setEnergy(this->energy - 1);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitCheck(this->hit) || energyCheck(this->energy))
        return ;
    setHit(this->hit - amount);
    if (getHit() < 0)
        setHit(0);
	std::cout << this->name << " has taken " << amount << " damage and has " << getHit() << " health left." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitCheck(this->hit) || energyCheck(this->energy))
        return ;
    setHit(this->hit + amount);
	setEnergy(this->energy - 1);
	std::cout << this->name << " has healed " << amount << " damage and has " << getHit() << " health left." <<std::endl;
}

std::string ClapTrap::getName() const
{
	return (this->name);
}

void ClapTrap::setName(std::string name)
{
	this->name = name;
}

int ClapTrap::getHit() const
{
	return (this->hit);
}

void    ClapTrap::setHit(int hit)
{
	this->hit = hit;
}

int ClapTrap::getEnergy() const
{
	return (this->energy);
}

void    ClapTrap::setEnergy(int energy)
{
	this->energy = energy;
}

int ClapTrap::getAttack() const
{
	return (this->att);
}

void	ClapTrap::setAttack(int attack)
{
	this->att =  attack;
}

bool    ClapTrap::energyCheck(int energy)
{
    if (energy <= 0)
    {
        this->energy = 0;
        std::cout << this->name << " has " << this->energy << " energy and is tired :(" << std::endl;
        return (true);
    }
    else
        std::cout << this->name << " has " << this->energy << " energy left." << std::endl;
        return (false);
}

bool    ClapTrap::hitCheck(int hit)
{
    if (hit <= 0)
    {
        this->hit = 0;
        std::cout << this->name << " has " << this->hit << " health and is dead rip :(" << std::endl;
        return (true);
    }
    return (false);
}