#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    return ;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap is being constructed" << std::endl;
    this->name = name;
    this->hit = 100;
    this->energy = 100;
    this->att = 30;
}

FragTrap::FragTrap(const FragTrap &f)
{
    std::cout << "FragTrap copy constructor" << std::endl;
    setName(f.getName());
    setHit(f.getHit());
    setEnergy(f.getEnergy());
    setAttack(f.getAttack());
}

FragTrap::~FragTrap()
{
    std::cout << "exploded damn :((" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "high five??" << std::endl;
    std::cout << "pls :((((" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &f)
{
    setName(f.getName());
    setAttack(f.getAttack());
    setHit(f.getHit());
    setEnergy(f.getEnergy());

    return (*this);
}

void	FragTrap::attack(std::string const & target)
{
    if (hitCheck(this->hit) || energyCheck(this->energy))
        return ;
	std::cout << this->name << " has " << this->energy << " energy left." << std::endl;
	std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->att << " points of damage!" << std::endl;
	setEnergy(this->energy - 1);
}